/* LEVEL_03:0x0CDFE0 -- resets the global record D_346F80. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_346F80;
extern float D_346F90;
extern float D_21B314;

void func_0CDFE0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_346F80.f_0C = 1.0f;
            D_346F80.i_00 = 0;
            D_346F90 = D_21B314;
            D_346F80.i_08 = 0;
            D_346F80.i_04 = 0;
        }
    }
}
