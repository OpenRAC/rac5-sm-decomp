typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0037D4E8;

void func_168B68(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0037D4E8.f00 = 0;
        D_0037D4E8.f0C = 1.0f;
        D_0037D4E8.f08 = 0;
        D_0037D4E8.f04 = 0;
    }
}
