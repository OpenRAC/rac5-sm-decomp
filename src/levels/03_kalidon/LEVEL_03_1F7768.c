typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_003B3E78;

void func_1F7768(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003B3E78.f00 = 0;
        D_003B3E78.f0C = 1.0f;
        D_003B3E78.f08 = 0;
        D_003B3E78.f04 = 0;
    }
}
