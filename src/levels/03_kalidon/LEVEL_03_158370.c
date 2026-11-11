/* LEVEL_03.REL:158370 -- resets the global record D_003AE830: three zero words
   and a float set to one, but only when a1 is 0xFFFF and a0 is not zero. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003AE830;

void func_158370(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AE830.f_00 = 0;
            D_003AE830.f_0C = 1.0f;
            D_003AE830.f_08 = 0;
            D_003AE830.f_04 = 0;
        }
    }
}
