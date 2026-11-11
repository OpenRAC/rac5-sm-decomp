typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_003622A8;

void func_196FB8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003622A8.f00 = 0;
        D_003622A8.f0C = 1.0f;
        D_003622A8.f08 = 0;
        D_003622A8.f04 = 0;
    }
}
