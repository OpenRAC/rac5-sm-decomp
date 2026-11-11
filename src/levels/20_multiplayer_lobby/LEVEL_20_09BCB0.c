/* LEVEL_20.REL:0x09BCB0 -- reset of the global record D_0019A6A0. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0019A6A0;

void func_20_09BCB0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0019A6A0.f_0C = 1.0f;
            D_0019A6A0.i_00 = 0;
            D_0019A6A0.i_08 = 0;
            D_0019A6A0.i_04 = 0;
        }
    }
}
