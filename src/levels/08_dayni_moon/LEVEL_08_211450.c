/* LEVEL_08.REL:211450 -- resets the global record D_003EB6C8: three zero words
   and a float set to one, but only when a1 is 0xFFFF and a0 is not zero. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003EB6C8;

void func_211450(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003EB6C8.f_00 = 0;
            D_003EB6C8.f_0C = 1.0f;
            D_003EB6C8.f_08 = 0;
            D_003EB6C8.f_04 = 0;
        }
    }
}
