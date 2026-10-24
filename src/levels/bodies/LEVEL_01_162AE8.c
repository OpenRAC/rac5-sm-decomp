typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00395778;

void func_162AE8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00395778.f00 = 0;
        D_00395778.f0C = 1.0f;
        D_00395778.f08 = 0;
        D_00395778.f04 = 0;
    }
}
