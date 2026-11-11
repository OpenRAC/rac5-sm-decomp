/* LEVEL_18:0x0C37B0 -- reset plus a value chosen by a masked global. */
typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_0027B1A0;
extern int D_0027B1B0;
extern int D_001D1A20;

void func_0C37B0(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027B1A0.i0 = 0;
            D_0027B1A0.i1 = 0;
            D_0027B1A0.i2 = 0;
            D_0027B1A0.f3 = 1.0f;
            D_0027B1B0 = ((D_001D1A20 ^ 0x18) == 0) ? 4 : 5;
        }
    }
}
