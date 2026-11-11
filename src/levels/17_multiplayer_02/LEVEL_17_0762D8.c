/* LEVEL_17.REL @ 0x0762D8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001E2528;

void func_0762D8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001E2528.f00 = 0;
            D_001E2528.f0C = 1.0f;
            D_001E2528.f08 = 0;
            D_001E2528.f04 = 0;
        }
    }
}
