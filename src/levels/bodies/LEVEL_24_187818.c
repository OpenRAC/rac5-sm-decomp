/* LEVEL_24:187818 -- resets the global record D_00361F38: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00361F38;

void func_187818(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00361F38.f_00 = 0;
            D_00361F38.f_0C = 1.0f;
            D_00361F38.f_08 = 0;
            D_00361F38.f_04 = 0;
        }
    }
}
