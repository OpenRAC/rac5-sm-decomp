/* LEVEL_03.REL:0x0C0018 -- reset of the global record D_00343C50. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00343C50;

void func_03_0C0018(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00343C50.f_0C = 1.0f;
            D_00343C50.i_00 = 0;
            D_00343C50.i_08 = 0;
            D_00343C50.i_04 = 0;
        }
    }
}
