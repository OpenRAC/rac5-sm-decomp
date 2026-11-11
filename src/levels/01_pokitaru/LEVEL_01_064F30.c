/* LEVEL_01.REL:064F30 -- resets the global record D_00239148: three zero words
   and a float set to one, but only when a1 is 0xFFFF and a0 is not zero. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00239148;

void func_064F30(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00239148.f_00 = 0;
            D_00239148.f_0C = 1.0f;
            D_00239148.f_08 = 0;
            D_00239148.f_04 = 0;
        }
    }
}
