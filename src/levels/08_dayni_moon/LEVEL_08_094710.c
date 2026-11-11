/* LEVEL_08.REL:0x094710 -- reset of the global record D_0028E2D0. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0028E2D0;

void func__094710(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0028E2D0.f_0C = 1.0f;
            D_0028E2D0.i_00 = 0;
            D_0028E2D0.i_08 = 0;
            D_0028E2D0.i_04 = 0;
        }
    }
}
