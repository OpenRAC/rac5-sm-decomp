/* LEVEL_05.REL:0x0EAEB0 -- reset of the global record D_00319608. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00319608;

void func_05_0EAEB0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00319608.f_0C = 1.0f;
            D_00319608.i_00 = 0;
            D_00319608.i_08 = 0;
            D_00319608.i_04 = 0;
        }
    }
}
