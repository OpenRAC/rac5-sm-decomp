typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00319B20;
extern int D_00319B30;
extern int D_00209670;

void func_0CF9E0(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00319B20.i0 = 0;
            D_00319B20.i1 = 0;
            D_00319B20.i2 = 0;
            D_00319B20.f3 = 1.0f;
            D_00319B30 = ((D_00209670 ^ 0x18) == 0) ? 4 : 5;
        }
    }
}
