/* LEVEL_09.REL:0x109980 -- reset of the global record D_00318F48. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00318F48;

void func_09_109980(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00318F48.f_0C = 1.0f;
            D_00318F48.i_00 = 0;
            D_00318F48.i_08 = 0;
            D_00318F48.i_04 = 0;
        }
    }
}
