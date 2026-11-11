typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_002ECD08;

void func_0FCE08(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002ECD08.f00 = 0;
        D_002ECD08.f0C = 1.0f;
        D_002ECD08.f08 = 0;
        D_002ECD08.f04 = 0;
    }
}
