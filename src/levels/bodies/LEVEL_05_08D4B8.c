/* LEVEL_05:08D4B8 -- resets the global record D_00233F08: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00233F08;

void func_08D4B8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00233F08.f_00 = 0;
            D_00233F08.f_0C = 1.0f;
            D_00233F08.f_08 = 0;
            D_00233F08.f_04 = 0;
        }
    }
}
