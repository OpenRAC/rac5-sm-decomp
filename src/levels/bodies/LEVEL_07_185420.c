/* LEVEL_07:185420 -- resets the global record D_003AB7F8: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003AB7F8;

void func_185420(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AB7F8.f_00 = 0;
            D_003AB7F8.f_0C = 1.0f;
            D_003AB7F8.f_08 = 0;
            D_003AB7F8.f_04 = 0;
        }
    }
}
