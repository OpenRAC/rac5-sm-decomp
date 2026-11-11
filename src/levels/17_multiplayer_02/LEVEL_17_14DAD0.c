/* LEVEL_17:14DAD0 -- clears the global record D_002D6398 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002D6398;

void func_14DAD0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002D6398.f_00 = 0;
            D_002D6398.f_04 = 0;
            D_002D6398.f_08 = 0;
            D_002D6398.f_0C = 1.0f;
        }
    }
}
