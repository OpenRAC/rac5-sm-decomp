/* LEVEL_10.REL:01AEB0 -- resets the global record D_239048: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_239048;

void func_01AEB0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_239048.f_00 = 0;
            D_239048.f_04 = 0;
            D_239048.f_08 = 0;
            D_239048.f_0C = 1.0f;
        }
    }
}
