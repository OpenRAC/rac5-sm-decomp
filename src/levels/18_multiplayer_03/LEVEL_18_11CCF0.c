/* LEVEL_18.REL:0x11CCF0 -- reset of the global record D_002E17E0. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002E17E0;

void func_18_11CCF0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E17E0.f_0C = 1.0f;
            D_002E17E0.i_00 = 0;
            D_002E17E0.i_08 = 0;
            D_002E17E0.i_04 = 0;
        }
    }
}
