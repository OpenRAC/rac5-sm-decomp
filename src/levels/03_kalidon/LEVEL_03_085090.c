/* LEVEL_03:085090 -- clears the global record D_00255D40 (three
   words and a float) when the second argument is 0xFFFF and the first one
   is not null. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00255D40;

void func_085090(Rec *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00255D40.f_00 = 0;
            D_00255D40.f_04 = 0;
            D_00255D40.f_08 = 0;
            D_00255D40.f_0C = 1.0f;
        }
    }
}
