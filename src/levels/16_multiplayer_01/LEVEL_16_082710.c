/* LEVEL_16.REL:0x082710 -- reset of the global record D_00240600. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00240600;

void func_16_082710(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00240600.f_0C = 1.0f;
            D_00240600.i_00 = 0;
            D_00240600.i_08 = 0;
            D_00240600.i_04 = 0;
        }
    }
}
