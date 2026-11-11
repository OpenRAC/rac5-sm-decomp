/* LEVEL_09.REL:033BD8 -- resets the global record D_0021C330: three zero words
   and a float set to one, but only when a1 is 0xFFFF and a0 is not zero. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0021C330;

void func_033BD8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0021C330.f_00 = 0;
            D_0021C330.f_0C = 1.0f;
            D_0021C330.f_08 = 0;
            D_0021C330.f_04 = 0;
        }
    }
}
