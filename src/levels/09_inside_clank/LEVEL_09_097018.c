/* LEVEL_09:097018 -- resets the global record D_00282668: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00282668;

void func_097018(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00282668.f_00 = 0;
            D_00282668.f_0C = 1.0f;
            D_00282668.f_08 = 0;
            D_00282668.f_04 = 0;
        }
    }
}
