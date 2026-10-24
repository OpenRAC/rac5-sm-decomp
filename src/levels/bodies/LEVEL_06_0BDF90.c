/* LEVEL_06:0BDF90 -- resets the global record D_00315DF0: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00315DF0;

void func_0BDF90(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00315DF0.f_00 = 0;
            D_00315DF0.f_0C = 1.0f;
            D_00315DF0.f_08 = 0;
            D_00315DF0.f_04 = 0;
        }
    }
}
