/* LEVEL_01.REL:0x1720C0 -- reset of the global record D_00395E50. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00395E50;

void func__1720C0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00395E50.f_0C = 1.0f;
            D_00395E50.i_00 = 0;
            D_00395E50.i_08 = 0;
            D_00395E50.i_04 = 0;
        }
    }
}
