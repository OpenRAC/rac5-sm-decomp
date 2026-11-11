/* LEVEL_01.REL:0x0D5B98 -- reset of the global record D_0032CED8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0032CED8;

void func_01_0D5B98(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0032CED8.f_0C = 1.0f;
            D_0032CED8.i_00 = 0;
            D_0032CED8.i_08 = 0;
            D_0032CED8.i_04 = 0;
        }
    }
}
