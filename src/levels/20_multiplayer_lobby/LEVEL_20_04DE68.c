/* LEVEL_20.REL:0x04DE68 -- reset of the global record D_001430C0. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_001430C0;

void func_20_04DE68(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001430C0.f_0C = 1.0f;
            D_001430C0.i_00 = 0;
            D_001430C0.i_08 = 0;
            D_001430C0.i_04 = 0;
        }
    }
}
