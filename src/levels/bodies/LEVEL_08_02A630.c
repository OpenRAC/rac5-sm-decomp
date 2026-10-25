/* LEVEL_08.REL:0x02A630 -- reset of the global record D_00280618. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00280618;

void func_08_02A630(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00280618.f_0C = 1.0f;
            D_00280618.i_00 = 0;
            D_00280618.i_08 = 0;
            D_00280618.i_04 = 0;
        }
    }
}
