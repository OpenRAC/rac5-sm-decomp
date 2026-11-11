/* LEVEL_20.REL:08B9A8 -- resets the global record D_199528: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_199528;

void func_08B9A8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_199528.f_00 = 0;
            D_199528.f_04 = 0;
            D_199528.f_08 = 0;
            D_199528.f_0C = 1.0f;
        }
    }
}
