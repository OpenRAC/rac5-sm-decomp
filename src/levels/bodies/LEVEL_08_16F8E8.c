/* LEVEL_08.REL:0x16F8E8 -- reset of the global record D_003E2DA0. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003E2DA0;

void func_08_16F8E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003E2DA0.f_0C = 1.0f;
            D_003E2DA0.i_00 = 0;
            D_003E2DA0.i_08 = 0;
            D_003E2DA0.i_04 = 0;
        }
    }
}
