/* LEVEL_10:1A84F8 -- resets the global record D_003A0420: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003A0420;

void func_1A84F8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003A0420.f_00 = 0;
            D_003A0420.f_0C = 1.0f;
            D_003A0420.f_08 = 0;
            D_003A0420.f_04 = 0;
        }
    }
}
