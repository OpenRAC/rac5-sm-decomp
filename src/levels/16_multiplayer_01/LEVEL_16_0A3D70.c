/* LEVEL_16:0A3D70 -- resets the global record D_00276408: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00276408;

void func_0A3D70(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00276408.f_00 = 0;
            D_00276408.f_0C = 1.0f;
            D_00276408.f_08 = 0;
            D_00276408.f_04 = 0;
        }
    }
}
