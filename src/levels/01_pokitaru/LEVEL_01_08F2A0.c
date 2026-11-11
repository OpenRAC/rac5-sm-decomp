/* LEVEL_01:0x08F2A0 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0023F200;

void func_08F2A0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0023F200.f_00 = 0;
        D_0023F200.f_04 = 0;
        D_0023F200.f_08 = 0;
        D_0023F200.f_0C = 1.0f;
    }
}
