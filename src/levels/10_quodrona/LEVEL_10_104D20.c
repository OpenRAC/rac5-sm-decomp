/* LEVEL_10.REL:0x104D20 -- reset of the global record D_0033AAB8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0033AAB8;

void func_10_104D20(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0033AAB8.f_0C = 1.0f;
            D_0033AAB8.i_00 = 0;
            D_0033AAB8.i_08 = 0;
            D_0033AAB8.i_04 = 0;
        }
    }
}
