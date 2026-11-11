/* LEVEL_05.REL @ 0x1B6550 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0038FB20;

void func_1B6550(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0038FB20.f00 = 0;
            D_0038FB20.f0C = 1.0f;
            D_0038FB20.f08 = 0;
            D_0038FB20.f04 = 0;
        }
    }
}
