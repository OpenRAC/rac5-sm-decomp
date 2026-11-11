/* LEVEL_22:13DE88 -- resets the global record D_002E8600: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002E8600;

void func_13DE88(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E8600.f_00 = 0;
            D_002E8600.f_0C = 1.0f;
            D_002E8600.f_08 = 0;
            D_002E8600.f_04 = 0;
        }
    }
}
