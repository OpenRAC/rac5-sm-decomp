/* LEVEL_18:0x0270C0 -- resets the record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_001E0418;

void func_0270C0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_001E0418.f_00 = 0;
        D_001E0418.f_04 = 0;
        D_001E0418.f_08 = 0;
        D_001E0418.f_0C = 1.0f;
    }
}
