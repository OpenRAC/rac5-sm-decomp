/* LEVEL_09.REL:0x1C4108 -- reset of the global record D_003804E0. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003804E0;

void func_09_1C4108(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003804E0.f_0C = 1.0f;
            D_003804E0.i_00 = 0;
            D_003804E0.i_08 = 0;
            D_003804E0.i_04 = 0;
        }
    }
}
