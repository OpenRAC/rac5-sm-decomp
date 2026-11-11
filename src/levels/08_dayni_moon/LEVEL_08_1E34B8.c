/* LEVEL_08:0x1E34B8 -- resets the level's record and flags it alive. */
typedef struct {
    int f_00;
    int f_04;
    int f_08;
    float f_0C;
} Rec;

extern Rec D_003EA298;

void func_1E34B8(int a0, int a1)
{
    if (a1 == 0xFFFF && a0 != 0) {
        D_003EA298.f_00 = 0;
        D_003EA298.f_04 = 0;
        D_003EA298.f_08 = 0;
        D_003EA298.f_0C = 1.0f;
    }
}
