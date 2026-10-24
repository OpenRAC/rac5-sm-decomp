/* LEVEL_06:1552E8 -- resets the global record D_00382410: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00382410;

void func_1552E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00382410.f_00 = 0;
            D_00382410.f_0C = 1.0f;
            D_00382410.f_08 = 0;
            D_00382410.f_04 = 0;
        }
    }
}
