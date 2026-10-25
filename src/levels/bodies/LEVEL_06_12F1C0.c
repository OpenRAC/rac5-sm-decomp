/* LEVEL_06:0x12F1C0 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_0037E4E8;

void func_12F1C0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_0037E4E8.f_00 = 0;
        D_0037E4E8.f_04 = 0;
        D_0037E4E8.f_08 = 0;
        D_0037E4E8.f_0C = 1.0f;
    }
}
