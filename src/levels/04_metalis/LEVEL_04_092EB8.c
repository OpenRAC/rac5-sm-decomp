/* LEVEL_04.REL:0x092EB8 -- reset of the global record D_00262848. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00262848;

void func_04_092EB8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00262848.f_0C = 1.0f;
            D_00262848.i_00 = 0;
            D_00262848.i_08 = 0;
            D_00262848.i_04 = 0;
        }
    }
}
