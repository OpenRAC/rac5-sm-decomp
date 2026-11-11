typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_002D5C60;

void func_10FA00(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002D5C60.f00 = 0;
        D_002D5C60.f0C = 1.0f;
        D_002D5C60.f08 = 0;
        D_002D5C60.f04 = 0;
    }
}
