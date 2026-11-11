typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0019E660;
extern int D_0019E670;
extern int D_00131510;

void func_0AED08(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0019E660.i0 = 0;
            D_0019E660.i1 = 0;
            D_0019E660.i2 = 0;
            D_0019E660.f3 = 1.0f;
            D_0019E670 = ((D_00131510 ^ 0x18) == 0) ? 4 : 5;
        }
    }
}
