/* LEVEL_15:0x0120B0 -- resets the global record and sets the neighbour
   constant. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_1776D8;
extern float D_1776E8;

void func_0120B0(void *a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0) {
            D_1776D8.f_0C = 1.0f;
            D_1776E8 = 0.033333335f;
            D_1776D8.f_00 = 0;
            D_1776D8.f_08 = 0;
            D_1776D8.f_04 = 0;
        }
    }
}
