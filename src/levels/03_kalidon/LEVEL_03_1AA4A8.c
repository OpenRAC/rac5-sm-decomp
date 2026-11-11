/* LEVEL_03.REL:0x1AA4A8 -- reset of the global record D_003B2080. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003B2080;

void func_03_1AA4A8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B2080.f_0C = 1.0f;
            D_003B2080.i_00 = 0;
            D_003B2080.i_08 = 0;
            D_003B2080.i_04 = 0;
        }
    }
}
