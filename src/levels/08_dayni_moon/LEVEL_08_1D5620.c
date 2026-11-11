/* LEVEL_08.REL:1D5620 -- resets the global record D_3E8CB0: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_3E8CB0;

void func_1D5620(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_3E8CB0.f_00 = 0;
            D_3E8CB0.f_04 = 0;
            D_3E8CB0.f_08 = 0;
            D_3E8CB0.f_0C = 1.0f;
        }
    }
}
