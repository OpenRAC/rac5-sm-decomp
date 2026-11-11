/* LEVEL_04:1976B8 -- resets the global record D_003B1440: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003B1440;

void func_1976B8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B1440.f_00 = 0;
            D_003B1440.f_0C = 1.0f;
            D_003B1440.f_08 = 0;
            D_003B1440.f_04 = 0;
        }
    }
}
