/* LEVEL_05.REL:0x0C2D88 -- reset of the global record D_00315370. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00315370;

void func_05_0C2D88(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00315370.f_0C = 1.0f;
            D_00315370.i_00 = 0;
            D_00315370.i_08 = 0;
            D_00315370.i_04 = 0;
        }
    }
}
