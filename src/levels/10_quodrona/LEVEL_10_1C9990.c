/* LEVEL_10.REL:1C9990 -- resets the global record D_3A1E70: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_3A1E70;

void func_1C9990(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_3A1E70.f_00 = 0;
            D_3A1E70.f_04 = 0;
            D_3A1E70.f_08 = 0;
            D_3A1E70.f_0C = 1.0f;
        }
    }
}
