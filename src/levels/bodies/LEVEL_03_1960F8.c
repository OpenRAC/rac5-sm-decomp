/* LEVEL_03:0x1960F8 -- when called with the marker argument and a non-null target, clears a small block, stores one into its float slot and halves two sample floats into a second pair of slots. */

struct Blk {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
};

extern float D_002214B0;
extern float D_002214B4;
extern struct Blk D_003B1E98;
extern float D_003B1EA8;
extern float D_003B1EAC;

void func_1960F8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003B1E98.w_00 = 0;
            D_003B1E98.f_0C = 1.0f;
            D_003B1E98.w_08 = 0;
            D_003B1EA8 = D_002214B0 * 0.5f;
            D_003B1EAC = D_002214B4 * 0.5f;
            D_003B1E98.w_04 = 0;
        }
    }
}
