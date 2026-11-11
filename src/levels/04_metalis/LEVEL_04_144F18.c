/* LEVEL_04.REL:144F18 -- resets the global record D_3ABF58: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_3ABF58;

void func_144F18(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_3ABF58.f_00 = 0;
            D_3ABF58.f_04 = 0;
            D_3ABF58.f_08 = 0;
            D_3ABF58.f_0C = 1.0f;
        }
    }
}
