/* LEVEL_05.REL:066838 -- resets the global record D_224F10: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_224F10;

void func_066838(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_224F10.f_00 = 0;
            D_224F10.f_04 = 0;
            D_224F10.f_08 = 0;
            D_224F10.f_0C = 1.0f;
        }
    }
}
