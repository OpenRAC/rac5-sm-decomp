/* LEVEL_10.REL:0x0DE468 -- reset of the global record D_00336A58. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00336A58;

void func_10_0DE468(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00336A58.f_0C = 1.0f;
            D_00336A58.i_00 = 0;
            D_00336A58.i_08 = 0;
            D_00336A58.i_04 = 0;
        }
    }
}
