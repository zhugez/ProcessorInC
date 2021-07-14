# Preprocessor: là một công cụ thay thế văn bản và nó chỉ thị trình biên dịch cần thực hiện trước khi biên dịch.
## #define: 
- Thay thế macro tiền xử lý.
## #include
- Chèn một header cụ thể từ một file khác.
## #undef
- Hủy định nghĩa macro tiền xử lý.
## ifndef
- Trả về true nếu macro được định nghĩa.
## #ifndef
- Trả về true nếu macro không được định nghĩa.
## #if
- Kiểm tra nếu một điều kiện thời gian biên dịch là true.
## #else
- Phương án thay thế theo sau #if.
## #elif
- #else và #if trong một câu lệnh.
## #endif
- Kết thúc tiền xử lý có điều kiện.
## #error
- In thông báo lỗi trên stderr.
## #pragma
- Đưa ra các lệnh đặc biệt cho trình biên dịch, sử dụng một phương thức được chuẩn hóa.
# Các macro được định nghĩa trước bởi ANSI C
# __DATE__
- Ngày hiện tại có định dạng "MMM DD YYYY". 
# __TIME__
- Thời gian hiện tại có định dạng "HH:MM:SS".
# __FILE__
- Chứa tên của file hiện tại có kiểu chuỗi.
# __LINE__
- Chứa số dòng hiện tại dưới dạng hằng số thập phân.
# __STDC__
- Được định nghĩa là 1 khi trình biên dịch tuân thủ tiêu chuẩn ANSI.
# Toán  tử Stringize (#)
- Toán tử stringize hoặc number-sign ('#'), khi được sử dụng trong định nghĩa macro, chuyển đổi một tham số macro thành hằng số chuỗi. Toán tử này chỉ có thể được sử dụng trong một macro có một đối số hoặc danh sách tham số được chỉ định.
#Tips for Segment Fault: https://web.mit.edu/10.001/Web/Tips/tips_on_segmentation.html
