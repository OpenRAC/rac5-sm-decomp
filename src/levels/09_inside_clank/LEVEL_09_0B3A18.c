/* LEVEL_09.REL:0x0B3A18 -- reset of the global record D_0030FEA8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0030FEA8;

void func_09_0B3A18(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0030FEA8.f_0C = 1.0f;
            D_0030FEA8.i_00 = 0;
            D_0030FEA8.i_08 = 0;
            D_0030FEA8.i_04 = 0;
        }
    }
}
