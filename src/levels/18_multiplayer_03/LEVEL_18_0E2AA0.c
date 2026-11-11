/* LEVEL_18.REL:0E2AA0 -- resets the global record D_27F848: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_27F848;

void func_0E2AA0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_27F848.f_00 = 0;
            D_27F848.f_04 = 0;
            D_27F848.f_08 = 0;
            D_27F848.f_0C = 1.0f;
        }
    }
}
