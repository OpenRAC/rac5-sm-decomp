/* LEVEL_07:030F90 -- resets the global record D_00248920: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00248920;

void func_030F90(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00248920.f_00 = 0;
            D_00248920.f_0C = 1.0f;
            D_00248920.f_08 = 0;
            D_00248920.f_04 = 0;
        }
    }
}
