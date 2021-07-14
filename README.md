# Preprocessor: là một công cụ thay thế văn bản và nó chỉ thị trình biên dịch cần thực hiện trước khi biên dịch.
## #define: 
- Thay thế macro tiền xử lý.
- #define  cho phép bạn đặt tên cho một hằng số nguyên hay hằng số thực, hoặc dùng để  định nghĩa một hàm.
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
## __DATE__
- Ngày hiện tại có định dạng "MMM DD YYYY". 
## __TIME__
- Thời gian hiện tại có định dạng "HH:MM:SS".
## __FILE__
- Chứa tên của file hiện tại có kiểu chuỗi.
## __LINE__
- Chứa số dòng hiện tại dưới dạng hằng số thập phân.
## __STDC__
- Được định nghĩa là 1 khi trình biên dịch tuân thủ tiêu chuẩn ANSI.
# Các toán tử: 
## Toán  tử Stringize (#)
- Toán tử stringize hoặc number-sign ('#'), khi được sử dụng trong định nghĩa macro, chuyển đổi một tham số macro thành hằng số chuỗi. Toán tử này chỉ có thể được sử dụng trong một macro có một đối số hoặc danh sách tham số được chỉ định.
#Tips for Segment Fault: https://web.mit.edu/10.001/Web/Tips/tips_on_segmentation.html
## Toán tử Token Pasting (##)
- Toán tử Token Pasting (##) trong một macro #define kết hợp hai đối số. Nó cho phép hai thẻ riêng biệt trong định nghĩa macro được kết hợp thành một mã thông báo duy nhất. 
## Toán tử Defined()
- Toán tử tiền xử lý defined được sử dụng trong biểu thức hằng số để xác định một identifier được định nghĩa sử dụng #define. Nếu identifier được chỉ định là defined, gía trị là true (non-zero). Nếu không được định nghĩa giá trị là false (zero). 
# Macro tham số
- VD: #define square(x) ((x) * (x))
- Sử dụng lệnh #define để định nghĩa macro tham số. Danh sách đối số được đặt trong dấu ngoặc đơn và phải ngay lập tức ngay sau tên macro. Không được phép sử dụng dấu cách giữa tên macro và dấu ngoặc đơn mở. 

# Typedef: sử dụng để cung cấp kiểu cho một tên mới.
# Sự khác nhau giữa typedef và define
. Typedef được giới hạn chỉ cung cấp các tên viết tắt cho các kiểu, trong khi đó #define có thể được sử dụng để định nghĩa tên hiệu cho cả các giá trị, như bạn có thể định nghĩa pi là 3.14, ….
. Sự phiên dịch typedef được thực hiện bởi bộ biên dịch, trong khi lệnh #define được xử lý bởi bộ tiền xử lý.
