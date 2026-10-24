/* LEVEL_07:15B560 -- resets the global record D_003A9250: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003A9250;

void func_15B560(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003A9250.f_00 = 0;
            D_003A9250.f_0C = 1.0f;
            D_003A9250.f_08 = 0;
            D_003A9250.f_04 = 0;
        }
    }
}
