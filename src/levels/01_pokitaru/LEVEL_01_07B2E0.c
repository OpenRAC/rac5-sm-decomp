/* LEVEL_01.REL:0x07B2E0 -- reset of the global record D_0023A660. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0023A660;

void func__07B2E0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0023A660.f_0C = 1.0f;
            D_0023A660.i_00 = 0;
            D_0023A660.i_08 = 0;
            D_0023A660.i_04 = 0;
        }
    }
}
