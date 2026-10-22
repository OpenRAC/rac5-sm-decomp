/* LEVEL_01:0x012A20 -- resets the global record D_22F558. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_22F558;
extern float D_22F568;

void func_012A20(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_22F558.f_0C = 1.0f;
            D_22F568 = 1.0f / 30.0f;
            D_22F558.i_00 = 0;
            D_22F558.i_08 = 0;
            D_22F558.i_04 = 0;
        }
    }
}
