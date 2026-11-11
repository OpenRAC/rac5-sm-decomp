/* LEVEL_05.REL:0B3FA0 -- resets the global record D_00314450: three zero words
   and a float set to one, but only when a1 is 0xFFFF and a0 is not zero. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00314450;

void func_0B3FA0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00314450.f_00 = 0;
            D_00314450.f_0C = 1.0f;
            D_00314450.f_08 = 0;
            D_00314450.f_04 = 0;
        }
    }
}
