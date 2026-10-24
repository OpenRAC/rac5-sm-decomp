/* LEVEL_09.REL:1AD598 -- resets the global record D_37FF78: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_37FF78;

void func_1AD598(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_37FF78.f_00 = 0;
            D_37FF78.f_04 = 0;
            D_37FF78.f_08 = 0;
            D_37FF78.f_0C = 1.0f;
        }
    }
}
