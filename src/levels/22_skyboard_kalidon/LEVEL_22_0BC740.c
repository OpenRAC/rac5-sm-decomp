/* LEVEL_22:0x0BC740 -- initialises a global record when the caller asks for
   it (a1 == 0xFFFF) and passes a valid owner pointer: three cleared words,
   a unit scale and a borrowed float. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00281CC0;
extern float D_00281CD0;
extern float D_00162014;

void func_0BC740(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00281CC0.f_0C = 1.0f;
        D_00281CD0 = D_00162014;
        D_00281CC0.f_00 = 0;
        D_00281CC0.f_08 = 0;
        D_00281CC0.f_04 = 0;
    }
}
