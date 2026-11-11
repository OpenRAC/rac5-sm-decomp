/* LEVEL_02.REL:0x1B56F0 -- reset of the global record D_003AEF08. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003AEF08;

void func__1B56F0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AEF08.f_0C = 1.0f;
            D_003AEF08.i_00 = 0;
            D_003AEF08.i_08 = 0;
            D_003AEF08.i_04 = 0;
        }
    }
}
