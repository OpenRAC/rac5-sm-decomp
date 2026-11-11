typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_003AB010;

void func_166FC8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003AB010.f00 = 0;
        D_003AB010.f0C = 1.0f;
        D_003AB010.f08 = 0;
        D_003AB010.f04 = 0;
    }
}
