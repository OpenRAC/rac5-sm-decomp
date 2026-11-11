/* LEVEL_04.REL:0x0C9FA0 -- reset of the global record D_00343C40. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00343C40;

void func_04_0C9FA0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00343C40.f_0C = 1.0f;
            D_00343C40.i_00 = 0;
            D_00343C40.i_08 = 0;
            D_00343C40.i_04 = 0;
        }
    }
}
