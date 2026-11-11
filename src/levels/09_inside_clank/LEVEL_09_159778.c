/* LEVEL_09.REL:0x159778 -- reset of the global record D_0037CE50. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0037CE50;

void func__159778(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037CE50.f_0C = 1.0f;
            D_0037CE50.i_00 = 0;
            D_0037CE50.i_08 = 0;
            D_0037CE50.i_04 = 0;
        }
    }
}
