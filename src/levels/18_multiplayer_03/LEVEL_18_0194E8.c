/* LEVEL_18.REL:0x0194E8 -- reset of the global record D_1DECC8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_1DECC8;

void func_0194E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_1DECC8.f_0C = 1.0f;
            D_1DECC8.i_00 = 0;
            D_1DECC8.i_08 = 0;
            D_1DECC8.i_04 = 0;
        }
    }
}
