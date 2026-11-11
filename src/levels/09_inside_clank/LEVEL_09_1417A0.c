/* LEVEL_09.REL:1417A0 -- resets the global record D_379208: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_379208;

void func_1417A0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_379208.f_00 = 0;
            D_379208.f_04 = 0;
            D_379208.f_08 = 0;
            D_379208.f_0C = 1.0f;
        }
    }
}
