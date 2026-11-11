/* LEVEL_16.REL:0x064F90 -- reset of the global record D_001EC4D0. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001EC4D0;

void func__064F90(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001EC4D0.f_0C = 1.0f;
            D_001EC4D0.i_00 = 0;
            D_001EC4D0.i_08 = 0;
            D_001EC4D0.i_04 = 0;
        }
    }
}
