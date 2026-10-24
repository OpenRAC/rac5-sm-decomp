/* LEVEL_18:0x10CFF8 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0029FC00;

void func_10CFF8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0029FC00.f_00 = 0;
        D_0029FC00.f_04 = 0;
        D_0029FC00.f_08 = 0;
        D_0029FC00.f_0C = 1.0f;
    }
}
