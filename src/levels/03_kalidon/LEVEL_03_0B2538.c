/* LEVEL_03:0B2538 -- clears the global record D_00342808 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00342808;

void func_0B2538(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00342808.f_00 = 0;
            D_00342808.f_04 = 0;
            D_00342808.f_08 = 0;
            D_00342808.f_0C = 1.0f;
        }
    }
}
