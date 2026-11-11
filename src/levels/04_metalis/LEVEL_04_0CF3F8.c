/* LEVEL_04:0CF3F8 -- resets the global record D_003466A8: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003466A8;

void func_0CF3F8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003466A8.f_00 = 0;
            D_003466A8.f_0C = 1.0f;
            D_003466A8.f_08 = 0;
            D_003466A8.f_04 = 0;
        }
    }
}
