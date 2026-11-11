/* LEVEL_09.REL:0x070BD8 -- reset of the global record D_00221580. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00221580;

void func__070BD8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00221580.f_0C = 1.0f;
            D_00221580.i_00 = 0;
            D_00221580.i_08 = 0;
            D_00221580.i_04 = 0;
        }
    }
}
