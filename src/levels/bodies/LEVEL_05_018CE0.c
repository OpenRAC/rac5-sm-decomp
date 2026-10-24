/* LEVEL_05.REL:0x018CE0 -- reset of the global record D_0021B570. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0021B570;

void func_05_018CE0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0021B570.f_0C = 1.0f;
            D_0021B570.i_00 = 0;
            D_0021B570.i_08 = 0;
            D_0021B570.i_04 = 0;
        }
    }
}
