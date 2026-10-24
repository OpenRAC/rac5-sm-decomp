/* LEVEL_20.REL:0x0A4F18 -- reset of the global record D_0019D868. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0019D868;

void func_20_0A4F18(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0019D868.f_0C = 1.0f;
            D_0019D868.i_00 = 0;
            D_0019D868.i_08 = 0;
            D_0019D868.i_04 = 0;
        }
    }
}
