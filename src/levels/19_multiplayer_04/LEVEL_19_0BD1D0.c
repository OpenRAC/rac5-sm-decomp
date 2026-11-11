/* LEVEL_19:0x0BD1D0 -- resets the global record D_27A300 and copies the
   global float D_1B1CC4 into the global float D_27A310. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0027A300;
extern float D_0027A310;
extern float D_001B1CC4;

void func_0BD1D0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027A300.f_0C = 1.0f;
            D_0027A300.f_00 = 0;
            D_0027A310 = D_001B1CC4;
            D_0027A300.f_08 = 0;
            D_0027A300.f_04 = 0;
        }
    }
}
