/* LEVEL_09:0x0C2378 -- resets the level's record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_00310C50;

void func_0C2378(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_00310C50.f_00 = 0;
        D_00310C50.f_04 = 0;
        D_00310C50.f_08 = 0;
        D_00310C50.f_0C = 1.0f;
    }
}
