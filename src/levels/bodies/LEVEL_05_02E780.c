/* LEVEL_05.REL:0x02E780 -- reset of the global record D_0021ED20. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0021ED20;

void func_05_02E780(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0021ED20.f_0C = 1.0f;
            D_0021ED20.i_00 = 0;
            D_0021ED20.i_08 = 0;
            D_0021ED20.i_04 = 0;
        }
    }
}
