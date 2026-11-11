/* LEVEL_02.REL:0x105C40 -- reset of the global record D_00348B58. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00348B58;

void func__105C40(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00348B58.f_0C = 1.0f;
            D_00348B58.i_00 = 0;
            D_00348B58.i_08 = 0;
            D_00348B58.i_04 = 0;
        }
    }
}
