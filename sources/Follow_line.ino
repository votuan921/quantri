#include<Arduino.h>
#include <WMHead.h>
#include <WMBoard.h>

double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;
WMRGBLed rgbLED(0,4);
WMBluetooth bluetooth(9,10);
double friction1;
double friction2;
double speed1;
double speed2;
double turn;
double state;
double bluetoothCmdType;
WMMatrixLed matrixLed(5);
WMBoardIR boardIr(13);
WMLineFollower lineFollower1(11,12);
WMDCMotor motor1(8);
WMDCMotor motor2(7);

void setup() {
  bluetooth.begin();
 matrixLed.setColorIndex(1);
matrixLed.setBrightness(6);
 boardIr.begin();
 rgbLED.setColor(0,0);
rgbLED.show();
  bluetooth.setName("QbotTuan");
  friction1=0;
  friction2=8;
  speed1=50;
  speed2=20;
  turn=1;
  state=0;

}

void loop() {
boardIr.startDecode();

  bluetooth.sendVersion();
  bluetoothCmdType=bluetooth.getCmd();
  matrixLed.showNum(0,state);
  if((boardIr.keyPressed(194)|(((bluetooth.getConstant(11)==bluetoothCmdType)|(bluetooth.getConstant(12)==bluetoothCmdType))))){
    state=fmod(((state+1)),2);
    matrixLed.showNum(0,state);
  }
  if((state==1)){
    if(lineFollower1.readSensorStatus(2)){
      rgbLED.setColor(2,0,0,255);
      rgbLED.show();
      rgbLED.setColor(1,255,0,0);
      rgbLED.show();
      motor1.reverseRun((speed2+friction1));
      motor2.reverseRun((speed1+friction2));
    }else{
      if(lineFollower1.readSensorStatus(1)){
        rgbLED.setColor(1,0,0,255);
        rgbLED.show();
        rgbLED.setColor(2,255,0,0);
        rgbLED.show();
        motor1.reverseRun((speed1+friction1));
        motor2.reverseRun((speed2+friction2));
      }else{
        if((turn==1)){
          rgbLED.setColor(0,0,0,255);
          rgbLED.show();
          motor1.reverseRun((speed1+friction1));
          motor2.reverseRun((speed1+friction2));
          turn=2;
        }else{
          rgbLED.setColor(0,0,0,255);
          rgbLED.show();
          motor2.reverseRun((speed1+friction2));
          motor1.reverseRun((speed1+friction1));
          turn=1;
        }
      }
    }
  }else{
    rgbLED.setColor(0,0,255,0);
    rgbLED.show();
    motor1.reverseRun(0);
    motor2.reverseRun(0);
  }

}
