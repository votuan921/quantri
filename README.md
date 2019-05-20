# Project: Qbots  </l>
## 1.Giới thiệu:
    Dự án thử nghiệm và ứng dụng Qbots
__Môn học__: Quản trị dự án hệ nhúng theo chuẩn kỹ năng ITSS  
__Học kỳ__: 20182  
__Giảng viên__: ThS.Nguyễn Đức Tiến  
__Nhóm__: 2  
__Thành viên__:   
**[HEDSPI AS.K60] Đại học Bách Khoa Hà Nội**
* Nguyễn Hoàng Dũng
* Vũ Công Duy
* Phạm Minh Khang
* Võ Quốc Tuấn  
## 2. Cấu trúc thư mục:
### sources:
Chứa source code của dự án:  
* Follow_line: Cho Qbots đi theo đường kẻ sẵn   
* Tracking_object: Tự động tìm vật thể và bám theo   

Các ứng dụng liên quan:
* Mobile App: ứng dụng cài đặt cho điện thoại để điều khiển bluetooth
* WeMake: ứng dụng WeMake để viết, sửa và tải code vào Qbot bằng giao diện đồ họa cùng các ví dụ từ nhà sản xuất 
### docs:
Báo cáo Final Report về dự án của nhóm đã thực hiện và Slide thuyết trình
### references:  
Các tài liệu liên quan về Qbot và template báo cáo 
## 3. Hướng dẫn cài đặt 
### a) Cài đặt môi trường : 
Cài đặt WeMake app trên máy tính. Sau khi đã có WeMake, chúng ta cài đặt driver Qbot cho máy thông qua WeMake  
> Help/Install Driver -> Install  
[Hướng dẫn cài đặt driver](https://www.youtube.com/watch?v=YpddoIfvPJs&list=PLQYW5Ukp-1D9cVizRBkVMLdKnxpZxyVhW&index=19) 
### b) Tải code vào Qbot
#### Cách 1: Thông qua WeMake  
+ Tắt Qbot, kết nối Qbot tới máy tính thông qua dây đi cùng trong bộ dụng cụ.  
+ Vào WeMake, lựa chọn cổng(Connect)
+ Tải code (File/Upload from your computer)
+ Chọn Load
#### Cách 2: Thông qua Arduino IDE (Recommend)  
+ Tắt Qbot, kết nối Qbot tới máy tính thông qua dây đi cùng trong bộ dụng cụ. 
+ Mở Aruino IDE  (đường dẫn mặc định):
> C:\Program Files (x86)\WeMake\resources\Arduino\arduino
+ Tải code vào IDE (File/Open hoặc Ctrl+O) 
+ Load code vào Qbot (Sketch/Upload hoặc Ctrl+U)
### c) Chạy thử nghiệm:
Ngắt kết nối giữa Qbot và máy tính, sau đó bật Qbot lên và thử nghiệm các chức năng 
