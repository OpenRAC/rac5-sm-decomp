typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_003361A0;
extern int D_003361B0;
extern int D_00223780;

void func_0D6520(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003361A0.i0 = 0;
            D_003361A0.i1 = 0;
            D_003361A0.i2 = 0;
            D_003361A0.f3 = 1.0f;
            D_003361B0 = ((D_00223780 ^ 0x18) == 0) ? 4 : 5;
        }
    }
}
