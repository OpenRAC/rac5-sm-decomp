/* LEVEL_07.REL:0BB6B0 -- resets the global record D_33E038: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_33E038;

void func_0BB6B0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_33E038.f_00 = 0;
            D_33E038.f_04 = 0;
            D_33E038.f_08 = 0;
            D_33E038.f_0C = 1.0f;
        }
    }
}
