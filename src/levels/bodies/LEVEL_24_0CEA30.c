typedef struct {
    int i0;
    int i1;
    int i2;
    float f3;
} Rec;

extern Rec D_002F8C60;
extern int D_002F8C70;
extern int D_001EB570;

void func_0CEA30(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002F8C60.i0 = 0;
            D_002F8C60.i1 = 0;
            D_002F8C60.i2 = 0;
            D_002F8C60.f3 = 1.0f;
            D_002F8C70 = ((D_001EB570 ^ 0x18) == 0) ? 4 : 5;
        }
    }
}
