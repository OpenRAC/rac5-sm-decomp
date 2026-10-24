/* LEVEL_16.REL:0x019EA0 -- reset of the global record D_001DE948. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001DE948;

void func_16_019EA0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001DE948.f_0C = 1.0f;
            D_001DE948.i_00 = 0;
            D_001DE948.i_08 = 0;
            D_001DE948.i_04 = 0;
        }
    }
}
