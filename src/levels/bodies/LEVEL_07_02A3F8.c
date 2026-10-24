/* LEVEL_07:02A3F8 -- resets the global record D_00246C98: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00246C98;

void func_02A3F8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00246C98.f_00 = 0;
            D_00246C98.f_0C = 1.0f;
            D_00246C98.f_08 = 0;
            D_00246C98.f_04 = 0;
        }
    }
}
