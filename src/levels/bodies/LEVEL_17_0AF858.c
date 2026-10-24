/* LEVEL_17.REL:0AF858 -- resets the global record D_268150: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_268150;

void func_0AF858(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_268150.f_00 = 0;
            D_268150.f_04 = 0;
            D_268150.f_08 = 0;
            D_268150.f_0C = 1.0f;
        }
    }
}
