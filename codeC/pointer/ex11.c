#include <stdio.h>

// Định nghĩa các hàm phép toán
float cong(float a, float b) { return a + b; }
float tru(float a, float b)  { return a - b; }
float nhan(float a, float b) { return a * b; }
float chia(float a, float b) 
{ 
    if (b == 0) {
        printf("Loi: chia cho 0!\n");
        return 0;
    }
    return a / b; 
}

typedef float (*pheptoan_ptr)(float, float);

int main()
{
    float a, b, ketqua;
    char tinh;

    printf("Nhap bieu thuc :");
    scanf("%f %c %f", &a, &tinh, &b);


    pheptoan_ptr hamchon = NULL;

    switch(tinh)
    {
        case '+': hamchon = cong; break;
        case '-': hamchon = tru; break;
        case '*': hamchon = nhan; break;
        case '/': hamchon = chia; break;
        default:
            printf("Toan tu khong hop le!\n");
            return 1;
    }

    // Gọi hàm thông qua con trỏ
    ketqua = hamchon(a, b);
    printf("Ket qua: %.2f\n", ketqua);

    return 0;
}
