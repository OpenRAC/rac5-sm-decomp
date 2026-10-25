/* LEVEL_05.REL:0x0BCDA0 -- reset of the global record D_00314980. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00314980;

void func_05_0BCDA0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00314980.f_0C = 1.0f;
            D_00314980.i_00 = 0;
            D_00314980.i_08 = 0;
            D_00314980.i_04 = 0;
        }
    }
}
