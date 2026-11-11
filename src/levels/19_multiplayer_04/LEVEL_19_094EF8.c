/* LEVEL_19:0x094EF8 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0026B118;

void func_094EF8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0026B118.f_00 = 0;
        D_0026B118.f_04 = 0;
        D_0026B118.f_08 = 0;
        D_0026B118.f_0C = 1.0f;
    }
}
