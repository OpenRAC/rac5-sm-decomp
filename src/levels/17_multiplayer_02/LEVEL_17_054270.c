/* LEVEL_17.REL:054270 -- resets the global record D_1DCA90: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_1DCA90;

void func_054270(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_1DCA90.f_00 = 0;
            D_1DCA90.f_04 = 0;
            D_1DCA90.f_08 = 0;
            D_1DCA90.f_0C = 1.0f;
        }
    }
}
