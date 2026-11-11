/* LEVEL_10.REL:0x0CD3C8 -- reset of the global record D_003353E8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003353E8;

void func_10_0CD3C8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003353E8.f_0C = 1.0f;
            D_003353E8.i_00 = 0;
            D_003353E8.i_08 = 0;
            D_003353E8.i_04 = 0;
        }
    }
}
