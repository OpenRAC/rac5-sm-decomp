/* LEVEL_20.REL:0x0E56A0 -- reset of the global record D_00202B38. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00202B38;

void func_20_0E56A0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00202B38.f_0C = 1.0f;
            D_00202B38.i_00 = 0;
            D_00202B38.i_08 = 0;
            D_00202B38.i_04 = 0;
        }
    }
}
