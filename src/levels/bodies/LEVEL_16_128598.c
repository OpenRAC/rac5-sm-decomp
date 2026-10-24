/* LEVEL_16.REL:128598 -- resets the global record D_2E2B00: three zero words
   and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_2E2B00;

void func_128598(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_2E2B00.f_00 = 0;
            D_2E2B00.f_04 = 0;
            D_2E2B00.f_08 = 0;
            D_2E2B00.f_0C = 1.0f;
        }
    }
}
