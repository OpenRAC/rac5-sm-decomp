/* LEVEL_05:0x13D810 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0037D778;

void func_13D810(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0037D778.f_00 = 0;
        D_0037D778.f_04 = 0;
        D_0037D778.f_08 = 0;
        D_0037D778.f_0C = 1.0f;
    }
}
