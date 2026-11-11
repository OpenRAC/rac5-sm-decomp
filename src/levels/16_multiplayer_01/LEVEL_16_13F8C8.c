/* LEVEL_16.REL:0x13F8C8 -- reset of the global record D_002E4A20. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002E4A20;

void func_16_13F8C8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E4A20.f_0C = 1.0f;
            D_002E4A20.i_00 = 0;
            D_002E4A20.i_08 = 0;
            D_002E4A20.i_04 = 0;
        }
    }
}
