/* LEVEL_01:1D1960 -- clears the global record D_00398B38 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00398B38;

void func_1D1960(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00398B38.f_00 = 0;
            D_00398B38.f_0C = 1.0f;
            D_00398B38.f_08 = 0;
            D_00398B38.f_04 = 0;
        }
    }
}
