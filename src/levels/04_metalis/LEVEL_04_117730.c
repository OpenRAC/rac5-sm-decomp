/* LEVEL_04:117730 -- resets the global record D_0034BF08: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0034BF08;

void func_117730(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0034BF08.f_00 = 0;
            D_0034BF08.f_0C = 1.0f;
            D_0034BF08.f_08 = 0;
            D_0034BF08.f_04 = 0;
        }
    }
}
