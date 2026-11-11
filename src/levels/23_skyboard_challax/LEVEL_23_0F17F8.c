/* LEVEL_23.REL:0x0F17F8 -- reset of the global record D_00302A88. */
typedef struct {
    int i_00;
    int i_04;
    int i_08;
    float f_0C;
} Rec;

extern Rec D_00302A88;

void func__0F17F8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00302A88.f_0C = 1.0f;
            D_00302A88.i_00 = 0;
            D_00302A88.i_08 = 0;
            D_00302A88.i_04 = 0;
        }
    }
}
