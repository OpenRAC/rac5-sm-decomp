/* LEVEL_18:0x080960 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_001FE848;

void func_080960(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_001FE848.f_00 = 0;
        D_001FE848.f_04 = 0;
        D_001FE848.f_08 = 0;
        D_001FE848.f_0C = 1.0f;
    }
}
