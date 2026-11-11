/* LEVEL_05.REL:0x15B4E0 -- reset of the global record D_00381558. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00381558;

void func_05_15B4E0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00381558.f_0C = 1.0f;
            D_00381558.i_00 = 0;
            D_00381558.i_08 = 0;
            D_00381558.i_04 = 0;
        }
    }
}
