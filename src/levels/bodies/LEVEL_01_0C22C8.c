/* LEVEL_01.REL:0x0C22C8 -- reset of the global record D_00328F20. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00328F20;

void func_01_0C22C8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00328F20.f_0C = 1.0f;
            D_00328F20.i_00 = 0;
            D_00328F20.i_08 = 0;
            D_00328F20.i_04 = 0;
        }
    }
}
