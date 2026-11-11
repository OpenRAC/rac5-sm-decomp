/* LEVEL_06.REL:122750 -- resets the global record D_33E720: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_33E720;

void func_122750(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_33E720.f_00 = 0;
            D_33E720.f_04 = 0;
            D_33E720.f_08 = 0;
            D_33E720.f_0C = 1.0f;
        }
    }
}
