/* LEVEL_22.REL @ 0x084BB8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001EDCD0;

void func_084BB8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001EDCD0.f00 = 0;
            D_001EDCD0.f0C = 1.0f;
            D_001EDCD0.f08 = 0;
            D_001EDCD0.f04 = 0;
        }
    }
}
