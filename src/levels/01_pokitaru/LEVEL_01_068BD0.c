/* LEVEL_01.REL:0x068BD0 -- reset of the global record D_00239210. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00239210;

void func_01_068BD0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00239210.f_0C = 1.0f;
            D_00239210.i_00 = 0;
            D_00239210.i_08 = 0;
            D_00239210.i_04 = 0;
        }
    }
}
