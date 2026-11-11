/* LEVEL_22.REL:0x13D960 -- reset of the global record D_2E85E8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_2E85E8;

void func_13D960(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_2E85E8.f_0C = 1.0f;
            D_2E85E8.i_00 = 0;
            D_2E85E8.i_08 = 0;
            D_2E85E8.i_04 = 0;
        }
    }
}
