/* LEVEL_08:1B51D8 -- clears the global record D_003E7C30 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003E7C30;

void func_1B51D8(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003E7C30.f_00 = 0;
            D_003E7C30.f_04 = 0;
            D_003E7C30.f_08 = 0;
            D_003E7C30.f_0C = 1.0f;
        }
    }
}
