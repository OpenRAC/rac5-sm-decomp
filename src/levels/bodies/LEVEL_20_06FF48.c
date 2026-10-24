/* LEVEL_20:0x06FF48 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00163E40;

void func_06FF48(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00163E40.f_00 = 0;
        D_00163E40.f_04 = 0;
        D_00163E40.f_08 = 0;
        D_00163E40.f_0C = 1.0f;
    }
}
