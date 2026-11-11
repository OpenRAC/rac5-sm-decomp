/* LEVEL_05.REL:0x1B0F38 -- reset of the global record D_0038FA50. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0038FA50;

void func__1B0F38(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0038FA50.f_0C = 1.0f;
            D_0038FA50.i_00 = 0;
            D_0038FA50.i_08 = 0;
            D_0038FA50.i_04 = 0;
        }
    }
}
