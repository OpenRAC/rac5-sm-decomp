/* LEVEL_06.REL:1BD940 -- resets the global record D_385548: three zero
   words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_385548;

void func_1BD940(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_385548.f_00 = 0;
            D_385548.f_04 = 0;
            D_385548.f_08 = 0;
            D_385548.f_0C = 1.0f;
        }
    }
}
