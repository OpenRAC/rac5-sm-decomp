/* LEVEL_24:179C38 -- resets the global record D_00360D60: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00360D60;

void func_179C38(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00360D60.f_00 = 0;
            D_00360D60.f_0C = 1.0f;
            D_00360D60.f_08 = 0;
            D_00360D60.f_04 = 0;
        }
    }
}
