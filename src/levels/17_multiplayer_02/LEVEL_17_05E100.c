/* LEVEL_17:05E100 -- clears the global record D_001DCC28 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_001DCC28;

void func_05E100(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001DCC28.f_00 = 0;
            D_001DCC28.f_0C = 1.0f;
            D_001DCC28.f_08 = 0;
            D_001DCC28.f_04 = 0;
        }
    }
}
