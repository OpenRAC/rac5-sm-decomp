/* LEVEL_01:1A6328 -- clears the global record D_003970A0 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003970A0;

void func_1A6328(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003970A0.f_00 = 0;
            D_003970A0.f_0C = 1.0f;
            D_003970A0.f_08 = 0;
            D_003970A0.f_04 = 0;
        }
    }
}
