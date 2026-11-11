/* LEVEL_22.REL:0x116FA8 -- reset of the global record D_002E7870. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002E7870;

void func_22_116FA8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E7870.f_0C = 1.0f;
            D_002E7870.i_00 = 0;
            D_002E7870.i_08 = 0;
            D_002E7870.i_04 = 0;
        }
    }
}
