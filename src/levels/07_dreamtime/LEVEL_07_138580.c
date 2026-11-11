/* LEVEL_07.REL:0x138580 -- reset of the global record D_003A7000. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003A7000;

void func__138580(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003A7000.f_0C = 1.0f;
            D_003A7000.i_00 = 0;
            D_003A7000.i_08 = 0;
            D_003A7000.i_04 = 0;
        }
    }
}
