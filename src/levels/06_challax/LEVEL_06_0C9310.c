/* LEVEL_06:0C9310 -- clears the global record D_00319540 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00319540;

void func_0C9310(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00319540.f_00 = 0;
            D_00319540.f_04 = 0;
            D_00319540.f_08 = 0;
            D_00319540.f_0C = 1.0f;
        }
    }
}
