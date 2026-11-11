/* LEVEL_02.REL:0CA360 -- resets the global record D_340690: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_340690;

void func_0CA360(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_340690.f_00 = 0;
            D_340690.f_04 = 0;
            D_340690.f_08 = 0;
            D_340690.f_0C = 1.0f;
        }
    }
}
