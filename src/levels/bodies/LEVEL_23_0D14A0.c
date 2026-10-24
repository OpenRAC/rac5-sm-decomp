/* LEVEL_23.REL @ 0x0D14A0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002FE620;

void func_0D14A0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002FE620.f00 = 0;
            D_002FE620.f0C = 1.0f;
            D_002FE620.f08 = 0;
            D_002FE620.f04 = 0;
        }
    }
}
