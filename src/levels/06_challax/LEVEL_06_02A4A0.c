/* LEVEL_06.REL @ 0x02A4A0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0021E690;

void func_02A4A0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0021E690.f00 = 0;
            D_0021E690.f0C = 1.0f;
            D_0021E690.f08 = 0;
            D_0021E690.f04 = 0;
        }
    }
}
