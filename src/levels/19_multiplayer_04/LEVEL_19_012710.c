/* LEVEL_19.REL:0x012710 -- reset of the global record D_001DE558. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001DE558;

void func__012710(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001DE558.f_0C = 1.0f;
            D_001DE558.i_00 = 0;
            D_001DE558.i_08 = 0;
            D_001DE558.i_04 = 0;
        }
    }
}
