typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_003A8DB8;

void func_148220(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003A8DB8.f00 = 0;
        D_003A8DB8.f0C = 1.0f;
        D_003A8DB8.f08 = 0;
        D_003A8DB8.f04 = 0;
    }
}
