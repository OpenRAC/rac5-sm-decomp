/* LEVEL_04.REL:034B98 -- resets the global record D_24D870: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_24D870;

void func_034B98(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_24D870.f_00 = 0;
            D_24D870.f_04 = 0;
            D_24D870.f_08 = 0;
            D_24D870.f_0C = 1.0f;
        }
    }
}
