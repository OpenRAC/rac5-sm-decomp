/* LEVEL_08:0CB158 -- resets the global record D_00378050: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00378050;

void func_0CB158(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00378050.f_00 = 0;
            D_00378050.f_0C = 1.0f;
            D_00378050.f_08 = 0;
            D_00378050.f_04 = 0;
        }
    }
}
