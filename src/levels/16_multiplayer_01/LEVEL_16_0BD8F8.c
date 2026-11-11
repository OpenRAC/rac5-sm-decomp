typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_0027A180;
extern float D_0027A190;
extern float D_001B0B44;

void func_0BD8F8(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0027A180.f0C = 1.0f;
        D_0027A180.f00 = 0;
        D_0027A190 = D_001B0B44;
        D_0027A180.f08 = 0;
        D_0027A180.f04 = 0;
    }
}
