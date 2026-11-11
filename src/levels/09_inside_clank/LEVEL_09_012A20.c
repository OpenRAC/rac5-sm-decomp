/* LEVEL_09:0x012A20 -- initialises a global record when the caller asks for
   it (a1 == 0xFFFF) and passes a valid owner pointer: three cleared words,
   a unit scale and a one-thirtieth step. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00216CD8;
extern float D_00216CE8;

void func_012A20(void *a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00216CD8.f_0C = 1.0f;
        D_00216CE8 = 1.0f / 30.0f;
        D_00216CD8.f_00 = 0;
        D_00216CD8.f_08 = 0;
        D_00216CD8.f_04 = 0;
    }
}
