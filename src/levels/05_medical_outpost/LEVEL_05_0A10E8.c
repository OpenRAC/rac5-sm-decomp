/* LEVEL_05.REL:0x0A10E8 -- reset of the global record D_0028AEA0. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0028AEA0;

void func_05_0A10E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0028AEA0.f_0C = 1.0f;
            D_0028AEA0.i_00 = 0;
            D_0028AEA0.i_08 = 0;
            D_0028AEA0.i_04 = 0;
        }
    }
}
