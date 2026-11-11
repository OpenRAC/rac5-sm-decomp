/* LEVEL_17.REL:0x0B3B18 -- reset of the global record D_00268710. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00268710;

void func__0B3B18(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00268710.f_0C = 1.0f;
            D_00268710.i_00 = 0;
            D_00268710.i_08 = 0;
            D_00268710.i_04 = 0;
        }
    }
}
