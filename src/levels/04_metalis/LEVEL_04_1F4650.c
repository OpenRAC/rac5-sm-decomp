/* LEVEL_04:1F4650 -- clears the global record D_003B4380 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003B4380;

void func_1F4650(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B4380.f_00 = 0;
            D_003B4380.f_0C = 1.0f;
            D_003B4380.f_08 = 0;
            D_003B4380.f_04 = 0;
        }
    }
}
