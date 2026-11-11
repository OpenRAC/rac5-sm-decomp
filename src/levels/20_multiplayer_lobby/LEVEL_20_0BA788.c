/* LEVEL_20.REL:0x0BA788 -- reset of the global record D_0019EF68. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0019EF68;

void func_20_0BA788(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0019EF68.f_0C = 1.0f;
            D_0019EF68.i_00 = 0;
            D_0019EF68.i_08 = 0;
            D_0019EF68.i_04 = 0;
        }
    }
}
