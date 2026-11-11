/* LEVEL_18:0x0BC8D0 -- resets the global record D_27A500. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_27A500;
extern float D_27A510;
extern float D_1B1FC4;

void func_0BC8D0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_27A500.f_0C = 1.0f;
            D_27A500.i_00 = 0;
            D_27A510 = D_1B1FC4;
            D_27A500.i_08 = 0;
            D_27A500.i_04 = 0;
        }
    }
}
