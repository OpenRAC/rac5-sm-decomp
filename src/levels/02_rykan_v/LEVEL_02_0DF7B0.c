/* LEVEL_02.REL:0x0DF7B0 -- reset of the global record D_003446D0. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_003446D0;

void func__0DF7B0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003446D0.f_0C = 1.0f;
            D_003446D0.i_00 = 0;
            D_003446D0.i_08 = 0;
            D_003446D0.i_04 = 0;
        }
    }
}
