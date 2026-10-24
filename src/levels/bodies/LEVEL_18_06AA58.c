/* LEVEL_18.REL:06AA58 -- resets the global record D_1ECE70: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_1ECE70;

void func_06AA58(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_1ECE70.f_00 = 0;
            D_1ECE70.f_04 = 0;
            D_1ECE70.f_08 = 0;
            D_1ECE70.f_0C = 1.0f;
        }
    }
}
