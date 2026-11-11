typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_003B0590;

void func_15CFB8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003B0590.f00 = 0;
        D_003B0590.f0C = 1.0f;
        D_003B0590.f08 = 0;
        D_003B0590.f04 = 0;
    }
}
