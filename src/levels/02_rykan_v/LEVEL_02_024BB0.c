/* LEVEL_02.REL @ 0x024BB0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00247178;

void func_024BB0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00247178.f00 = 0;
            D_00247178.f0C = 1.0f;
            D_00247178.f08 = 0;
            D_00247178.f04 = 0;
        }
    }
}
