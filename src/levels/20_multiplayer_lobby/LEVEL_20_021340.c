/* LEVEL_20:021340 -- resets the global record D_00136340: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00136340;

void func_021340(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00136340.f_00 = 0;
            D_00136340.f_0C = 1.0f;
            D_00136340.f_08 = 0;
            D_00136340.f_04 = 0;
        }
    }
}
