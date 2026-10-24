/* LEVEL_04:0CEBE8 -- resets the global record D_00346698: three zero words and a float set to one. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00346698;

void func_0CEBE8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00346698.f_00 = 0;
            D_00346698.f_0C = 1.0f;
            D_00346698.f_08 = 0;
            D_00346698.f_04 = 0;
        }
    }
}
