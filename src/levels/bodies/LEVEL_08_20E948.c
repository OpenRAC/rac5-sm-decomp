/* LEVEL_08.REL:0x20E948 -- reset of the global record D_003EB428. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003EB428;

void func_08_20E948(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003EB428.f_0C = 1.0f;
            D_003EB428.i_00 = 0;
            D_003EB428.i_08 = 0;
            D_003EB428.i_04 = 0;
        }
    }
}
