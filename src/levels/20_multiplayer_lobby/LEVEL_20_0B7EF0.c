/* LEVEL_20.REL:0x0B7EF0 -- reset of the global record D_19EF38. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_19EF38;

void func_0B7EF0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_19EF38.f_0C = 1.0f;
            D_19EF38.i_00 = 0;
            D_19EF38.i_08 = 0;
            D_19EF38.i_04 = 0;
        }
    }
}
