/* LEVEL_24:0x14C9E0 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0035F758;

void func_14C9E0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0035F758.f_00 = 0;
        D_0035F758.f_04 = 0;
        D_0035F758.f_08 = 0;
        D_0035F758.f_0C = 1.0f;
    }
}
