/* LEVEL_04.REL:0x195E60 -- reset of the global record D_003B1400. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003B1400;

void func_04_195E60(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B1400.f_0C = 1.0f;
            D_003B1400.i_00 = 0;
            D_003B1400.i_08 = 0;
            D_003B1400.i_04 = 0;
        }
    }
}
