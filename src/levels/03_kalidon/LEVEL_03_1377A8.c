/* LEVEL_03.REL @ 0x1377A8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003AC5F8;

void func_1377A8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AC5F8.f00 = 0;
            D_003AC5F8.f0C = 1.0f;
            D_003AC5F8.f08 = 0;
            D_003AC5F8.f04 = 0;
        }
    }
}
