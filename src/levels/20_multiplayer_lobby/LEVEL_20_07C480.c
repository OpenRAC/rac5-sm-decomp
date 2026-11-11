/* LEVEL_20.REL:0x07C480 -- reset of the global record D_0017A370. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0017A370;

void func_20_07C480(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0017A370.f_0C = 1.0f;
            D_0017A370.i_00 = 0;
            D_0017A370.i_08 = 0;
            D_0017A370.i_04 = 0;
        }
    }
}
