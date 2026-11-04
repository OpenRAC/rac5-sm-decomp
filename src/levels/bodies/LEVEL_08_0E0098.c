typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0037C020;
extern int D_0037C030;
extern int D_00264470;

void func_0E0098(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037C020.i0 = 0;
            D_0037C020.i1 = 0;
            D_0037C020.i2 = 0;
            D_0037C020.f3 = 1.0f;
            D_0037C030 = ((D_00264470 ^ 0x18) == 0) ? 4 : 5;
        }
    }
}
