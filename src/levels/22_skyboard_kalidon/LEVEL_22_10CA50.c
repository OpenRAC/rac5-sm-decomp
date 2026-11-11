/* LEVEL_22.REL @ 0x10CA50 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002E71E0;

void func_10CA50(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E71E0.f00 = 0;
            D_002E71E0.f0C = 1.0f;
            D_002E71E0.f08 = 0;
            D_002E71E0.f04 = 0;
        }
    }
}
