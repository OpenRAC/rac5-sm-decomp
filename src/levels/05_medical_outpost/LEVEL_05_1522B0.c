/* LEVEL_05:1522B0 -- clears the global record D_0037F798 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0037F798;

void func_1522B0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037F798.f_00 = 0;
            D_0037F798.f_04 = 0;
            D_0037F798.f_08 = 0;
            D_0037F798.f_0C = 1.0f;
        }
    }
}
