/* LEVEL_15.REL:069918 -- resets the global record D_182F30: three zero
   words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_182F30;

void func_069918(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_182F30.f_00 = 0;
            D_182F30.f_0C = 1.0f;
            D_182F30.f_08 = 0;
            D_182F30.f_04 = 0;
        }
    }
}
