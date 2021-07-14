//Preprocessor: là một công cụ thay thế văn bản và nó chỉ thị trình biên dịch cần thực hiện trước khi biên dịch.
#include <stdio.h>
#define MIN(a, b) (((a) < (b)) ? a : b)
#define MAX(a, b) (((a) > (b)) ? a : b)
//Macro thường được giới hạn trong một dòng. Toán tử tiếp tục macro (\) được sử dụng để tiếp tục macro quá dài cho một dòng. Ví dụ::
#define Wishes(a, b) \
    printf(#a " & " #b ": Have a nice day!\n")
//Vi du Stringize
#define DEBUG
int main()
{
    int i, j;
    i = 6;
    j = 23;
#ifdef DEBUG
    printf("The result: Welcome to Zhuge's world!");
#endif
#if 0
       /* Day la phan comment */
        printf("This is comment");
#endif
    printf("\nGia tri nho nhat la:  %d", MIN(i, j));
    printf("\nGia tri lon nhat la: %d\n", MAX(i, j));
    //ANSI C
    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("Line :%d\n", __LINE__);
    printf("ANSI :%d\n", __STDC__);
    Wishes(Ngoc, Vu);
    printf("%c", Wishes(Ngoc, Vu)); //Thật kì lạ mình không hiểu tại sao chỗ này nếu dùng printf thì nó in ra kèm theo kí tự "" ở dưới
    return 0;
}
