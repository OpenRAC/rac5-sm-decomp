/* LEVEL_05.REL:0x169080 -- reset of the global record D_00381C00. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00381C00;

void func_05_169080(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00381C00.f_0C = 1.0f;
            D_00381C00.i_00 = 0;
            D_00381C00.i_08 = 0;
            D_00381C00.i_04 = 0;
        }
    }
}
