typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_001F0AA8;

void func_08B428(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_001F0AA8.f00 = 0;
        D_001F0AA8.f0C = 1.0f;
        D_001F0AA8.f08 = 0;
        D_001F0AA8.f04 = 0;
    }
}
