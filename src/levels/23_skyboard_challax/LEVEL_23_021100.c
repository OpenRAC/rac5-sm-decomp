/* LEVEL_23.REL:0x021100 -- reset of the global record D_001FD0E8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001FD0E8;

void func_23_021100(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001FD0E8.f_0C = 1.0f;
            D_001FD0E8.i_00 = 0;
            D_001FD0E8.i_08 = 0;
            D_001FD0E8.i_04 = 0;
        }
    }
}
