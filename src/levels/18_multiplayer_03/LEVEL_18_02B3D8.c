/* LEVEL_18.REL:0x02B3D8 -- reset of the global record D_001E0A20. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001E0A20;

void func_18_02B3D8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001E0A20.f_0C = 1.0f;
            D_001E0A20.i_00 = 0;
            D_001E0A20.i_08 = 0;
            D_001E0A20.i_04 = 0;
        }
    }
}
