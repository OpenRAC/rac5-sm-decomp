/* LEVEL_04:1129D0 -- resets the global record D_0034BED8: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0034BED8;

void func_1129D0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0034BED8.f_00 = 0;
            D_0034BED8.f_0C = 1.0f;
            D_0034BED8.f_08 = 0;
            D_0034BED8.f_04 = 0;
        }
    }
}
