# Arduino LM35 Temperature Monitor

## Mô tả
Dự án sử dụng Arduino và cảm biến LM35 để đo nhiệt độ từ nhiều kênh (A0, A1, A2) và gửi dữ liệu qua Serial dưới dạng JSON.

## Tính năng
- Đọc nhiệt độ từ 3 kênh analog (A0, A1, A2)
- Chuyển đổi ADC sang nhiệt độ (°C)
- Xuất dữ liệu dạng JSON
- Dễ mở rộng hệ thống

## Phần cứng cần thiết
- Arduino (Uno hoặc tương đương)
- Cảm biến LM35
- Dây nối
- Máy tính để đọc dữ liệu

## Cách sử dụng
1. Kết nối LM35 vào các chân A0, A1, A2  
2. Nạp chương trình vào Arduino  
3. Mở Serial Monitor (9600 baud)  
4. Quan sát dữ liệu JSON hiển thị  

## Cấu trúc thư mục
Arduino_LM35_TempMonitor/
- firmware/
  - LM35_TempReader/
- docs/
- simulation/
- README.md

## Thành viên nhóm
- Nguyễn Đình Vũ
- Trần Phúc Thịnh
