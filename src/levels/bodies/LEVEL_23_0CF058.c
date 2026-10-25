/* LEVEL_23.REL:0x0CF058 -- reset of the global record D_002FE590. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_002FE590;

void func_23_0CF058(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002FE590.f_0C = 1.0f;
            D_002FE590.i_00 = 0;
            D_002FE590.i_08 = 0;
            D_002FE590.i_04 = 0;
        }
    }
}
