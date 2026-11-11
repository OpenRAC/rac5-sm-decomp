typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_002D2380;

void func_11BD00(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002D2380.f00 = 0;
        D_002D2380.f0C = 1.0f;
        D_002D2380.f08 = 0;
        D_002D2380.f04 = 0;
    }
}
