/* LEVEL_09.REL:0x1BC4E0 -- reset of the global record D_3803B8. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_3803B8;

void func_1BC4E0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_3803B8.f_0C = 1.0f;
            D_3803B8.i_00 = 0;
            D_3803B8.i_08 = 0;
            D_3803B8.i_04 = 0;
        }
    }
}
