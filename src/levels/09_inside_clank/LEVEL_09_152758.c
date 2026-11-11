/* LEVEL_09.REL:0x152758 -- reset of the global record D_0037C430. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0037C430;

void func_09_152758(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037C430.f_0C = 1.0f;
            D_0037C430.i_00 = 0;
            D_0037C430.i_08 = 0;
            D_0037C430.i_04 = 0;
        }
    }
}
