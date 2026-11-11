/* LEVEL_07.REL:0x0EB780 -- reset of the global record D_00343008. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00343008;

void func__0EB780(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00343008.f_0C = 1.0f;
            D_00343008.i_00 = 0;
            D_00343008.i_08 = 0;
            D_00343008.i_04 = 0;
        }
    }
}
