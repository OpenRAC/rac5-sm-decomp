typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_002F9B68;

void func_0AD530(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002F9B68.f00 = 0;
        D_002F9B68.f0C = 1.0f;
        D_002F9B68.f08 = 0;
        D_002F9B68.f04 = 0;
    }
}
