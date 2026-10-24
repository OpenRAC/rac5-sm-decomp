/* LEVEL_10.REL:1583F8 -- resets the global record D_0039CE20: three zero words
   and a float set to one, but only when a1 is 0xFFFF and a0 is not zero. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0039CE20;

void func_1583F8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0039CE20.f_00 = 0;
            D_0039CE20.f_0C = 1.0f;
            D_0039CE20.f_08 = 0;
            D_0039CE20.f_04 = 0;
        }
    }
}
