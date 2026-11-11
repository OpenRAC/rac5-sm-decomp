/* LEVEL_03.REL:0x0F8CB8 -- reset of the global record D_0034C488. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0034C488;

void func_03_0F8CB8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0034C488.f_0C = 1.0f;
            D_0034C488.i_00 = 0;
            D_0034C488.i_08 = 0;
            D_0034C488.i_04 = 0;
        }
    }
}
