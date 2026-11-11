/* LEVEL_05:0x1572E8 -- resets a small global record when the caller asks for
   a full refresh: three zero words and one float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00381518;

void func_1572E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00381518.f_00 = 0;
            D_00381518.f_0C = 1.0f;
            D_00381518.f_08 = 0;
            D_00381518.f_04 = 0;
        }
    }
}
