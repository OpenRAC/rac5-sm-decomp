/* LEVEL_04.REL:0x1F4E00 -- reset of the global record D_003B43B0. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003B43B0;

void func_04_1F4E00(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B43B0.f_0C = 1.0f;
            D_003B43B0.i_00 = 0;
            D_003B43B0.i_08 = 0;
            D_003B43B0.i_04 = 0;
        }
    }
}
