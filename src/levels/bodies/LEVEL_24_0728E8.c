typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_00206170;

void func_0728E8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00206170.f00 = 0;
        D_00206170.f0C = 1.0f;
        D_00206170.f08 = 0;
        D_00206170.f04 = 0;
    }
}
