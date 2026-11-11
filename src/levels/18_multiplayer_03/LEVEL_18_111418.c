typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} S;

extern S D_002DF940;

void func_111418(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_002DF940.f00 = 0;
        D_002DF940.f0C = 1.0f;
        D_002DF940.f08 = 0;
        D_002DF940.f04 = 0;
    }
}
