/* LEVEL_03.REL:0x011D98 -- reset of the global record D_0024A380. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0024A380;

void func_03_011D98(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0024A380.f_0C = 1.0f;
            D_0024A380.i_00 = 0;
            D_0024A380.i_08 = 0;
            D_0024A380.i_04 = 0;
        }
    }
}
