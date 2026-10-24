/* LEVEL_06.REL @ 0x0254C8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0021DC90;

void func_0254C8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0021DC90.f00 = 0;
            D_0021DC90.f0C = 1.0f;
            D_0021DC90.f08 = 0;
            D_0021DC90.f04 = 0;
        }
    }
}
