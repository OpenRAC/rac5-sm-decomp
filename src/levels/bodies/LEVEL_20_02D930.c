/* LEVEL_20:02D930 -- clears the global record D_0013B478 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0013B478;

void func_02D930(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0013B478.f_00 = 0;
            D_0013B478.f_0C = 1.0f;
            D_0013B478.f_08 = 0;
            D_0013B478.f_04 = 0;
        }
    }
}
