/* LEVEL_23:0CCD50 -- resets the global record D_002FE408: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_002FE408;

void func_0CCD50(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002FE408.f_00 = 0;
            D_002FE408.f_0C = 1.0f;
            D_002FE408.f_08 = 0;
            D_002FE408.f_04 = 0;
        }
    }
}
