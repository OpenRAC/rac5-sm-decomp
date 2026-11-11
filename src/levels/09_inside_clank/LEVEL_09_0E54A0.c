/* LEVEL_09.REL:0x0E54A0 -- reset of the global record D_00314E48. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00314E48;

void func_09_0E54A0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00314E48.f_0C = 1.0f;
            D_00314E48.i_00 = 0;
            D_00314E48.i_08 = 0;
            D_00314E48.i_04 = 0;
        }
    }
}
