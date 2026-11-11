/* LEVEL_20:05B1C8 -- resets the global record D_00144568: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00144568;

void func_05B1C8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00144568.f_00 = 0;
            D_00144568.f_0C = 1.0f;
            D_00144568.f_08 = 0;
            D_00144568.f_04 = 0;
        }
    }
}
