/* LEVEL_02.REL:1D0648 -- resets the global record D_3B0228: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_3B0228;

void func_1D0648(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_3B0228.f_00 = 0;
            D_3B0228.f_04 = 0;
            D_3B0228.f_08 = 0;
            D_3B0228.f_0C = 1.0f;
        }
    }
}
