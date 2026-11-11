/* LEVEL_01.REL:19F6B0 -- resets the global record D_396F10: three zero
   words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_396F10;

void func_19F6B0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_396F10.f_00 = 0;
            D_396F10.f_04 = 0;
            D_396F10.f_08 = 0;
            D_396F10.f_0C = 1.0f;
        }
    }
}
