/* LEVEL_01.REL:0x142B10 -- reset of the global record D_003918F8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003918F8;

void func_01_142B10(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003918F8.f_0C = 1.0f;
            D_003918F8.i_00 = 0;
            D_003918F8.i_08 = 0;
            D_003918F8.i_04 = 0;
        }
    }
}
