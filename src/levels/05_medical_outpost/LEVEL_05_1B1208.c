/* LEVEL_05:1B1208 -- resets the global record D_0038FA60: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0038FA60;

void func_1B1208(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0038FA60.f_00 = 0;
            D_0038FA60.f_0C = 1.0f;
            D_0038FA60.f_08 = 0;
            D_0038FA60.f_04 = 0;
        }
    }
}
