typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_00347C20;
extern int D_00347C30;
extern int D_002336F0;

void func_0D4EC8(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00347C20.i0 = 0;
            D_00347C20.i1 = 0;
            D_00347C20.i2 = 0;
            D_00347C20.f3 = 1.0f;
            D_00347C30 = ((D_002336F0 ^ 0x18) == 0) ? 4 : 5;
        }
    }
}
