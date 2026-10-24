/* LEVEL_06:0BB698 -- resets the global record D_00315C70: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00315C70;

void func_0BB698(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00315C70.f_00 = 0;
            D_00315C70.f_0C = 1.0f;
            D_00315C70.f_08 = 0;
            D_00315C70.f_04 = 0;
        }
    }
}
