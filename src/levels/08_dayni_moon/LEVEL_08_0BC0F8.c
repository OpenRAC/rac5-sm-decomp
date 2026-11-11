/* LEVEL_08.REL:0x0BC0F8 -- reset of the global record D_00376B90. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00376B90;

void func_08_0BC0F8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00376B90.f_0C = 1.0f;
            D_00376B90.i_00 = 0;
            D_00376B90.i_08 = 0;
            D_00376B90.i_04 = 0;
        }
    }
}
