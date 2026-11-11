/* LEVEL_10.REL:0x1A6500 -- reset of the global record D_003A0400. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003A0400;

void func_10_1A6500(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003A0400.f_0C = 1.0f;
            D_003A0400.i_00 = 0;
            D_003A0400.i_08 = 0;
            D_003A0400.i_04 = 0;
        }
    }
}
