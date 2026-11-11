/* LEVEL_15.REL:993816 -- resets the global record D_0029F160: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0029F160;

void func_0F2A18(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0029F160.f_00 = 0;
            D_0029F160.f_04 = 0;
            D_0029F160.f_08 = 0;
            D_0029F160.f_0C = 1.0f;
        }
    }
}
