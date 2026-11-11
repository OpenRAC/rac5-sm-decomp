/* LEVEL_19:0A0540 -- resets the global record D_00275DF8: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00275DF8;

void func_0A0540(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00275DF8.f_00 = 0;
            D_00275DF8.f_0C = 1.0f;
            D_00275DF8.f_08 = 0;
            D_00275DF8.f_04 = 0;
        }
    }
}
