/* LEVEL_18:04A9C0 -- clears the global record D_001EB968 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_001EB968;

void func_04A9C0(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001EB968.f_00 = 0;
            D_001EB968.f_04 = 0;
            D_001EB968.f_08 = 0;
            D_001EB968.f_0C = 1.0f;
        }
    }
}
