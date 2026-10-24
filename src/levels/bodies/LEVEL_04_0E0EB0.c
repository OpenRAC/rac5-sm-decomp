/* LEVEL_04:0x0E0EB0 -- resets the level's record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00347E28;

void func_0E0EB0(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00347E28.f_00 = 0;
        D_00347E28.f_04 = 0;
        D_00347E28.f_08 = 0;
        D_00347E28.f_0C = 1.0f;
    }
}
