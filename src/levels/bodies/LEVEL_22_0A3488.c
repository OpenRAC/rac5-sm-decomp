/* LEVEL_22.REL:0x0A3488 -- reset of the global record D_0027E088. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_0027E088;

void func__0A3488(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027E088.f_0C = 1.0f;
            D_0027E088.i_00 = 0;
            D_0027E088.i_08 = 0;
            D_0027E088.i_04 = 0;
        }
    }
}
