/* LEVEL_02.REL:0x096490 -- reset of the global record D_0025F548. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0025F548;

void func_02_096490(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0025F548.f_0C = 1.0f;
            D_0025F548.i_00 = 0;
            D_0025F548.i_08 = 0;
            D_0025F548.i_04 = 0;
        }
    }
}
