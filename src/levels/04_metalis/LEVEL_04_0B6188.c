/* LEVEL_04.REL:0x0B6188 -- reset of the global record D_00337D90. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00337D90;

void func_04_0B6188(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00337D90.f_0C = 1.0f;
            D_00337D90.i_00 = 0;
            D_00337D90.i_08 = 0;
            D_00337D90.i_04 = 0;
        }
    }
}
