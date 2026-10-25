/* LEVEL_24.REL:0x16D850 -- reset of the global record D_00360B68. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00360B68;

void func_24_16D850(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00360B68.f_0C = 1.0f;
            D_00360B68.i_00 = 0;
            D_00360B68.i_08 = 0;
            D_00360B68.i_04 = 0;
        }
    }
}
