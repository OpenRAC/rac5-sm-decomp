/* LEVEL_17.REL:0AF790 -- resets the global record D_00268130: three zero words
   and a float set to one, but only when a1 is 0xFFFF and a0 is not zero. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00268130;

void func_0AF790(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00268130.f_00 = 0;
            D_00268130.f_0C = 1.0f;
            D_00268130.f_08 = 0;
            D_00268130.f_04 = 0;
        }
    }
}
