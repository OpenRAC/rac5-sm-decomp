/* LEVEL_05.REL:082B90 -- resets the global record D_226D80: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_226D80;

void func_082B90(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_226D80.f_00 = 0;
            D_226D80.f_04 = 0;
            D_226D80.f_08 = 0;
            D_226D80.f_0C = 1.0f;
        }
    }
}
