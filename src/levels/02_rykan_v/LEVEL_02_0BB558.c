/* LEVEL_02.REL:0BB558 -- resets the global record D_33F990: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_33F990;

void func_0BB558(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_33F990.f_00 = 0;
            D_33F990.f_04 = 0;
            D_33F990.f_08 = 0;
            D_33F990.f_0C = 1.0f;
        }
    }
}
