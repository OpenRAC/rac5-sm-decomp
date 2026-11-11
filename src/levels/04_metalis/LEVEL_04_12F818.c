/* LEVEL_04.REL:12F818 -- resets the global record D_36C060: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_36C060;

void func_12F818(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_36C060.f_00 = 0;
            D_36C060.f_04 = 0;
            D_36C060.f_08 = 0;
            D_36C060.f_0C = 1.0f;
        }
    }
}
