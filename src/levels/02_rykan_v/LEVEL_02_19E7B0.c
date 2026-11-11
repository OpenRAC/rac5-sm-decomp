/* LEVEL_02.REL @ 0x19E7B0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003AEB90;

void func_19E7B0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AEB90.f00 = 0;
            D_003AEB90.f0C = 1.0f;
            D_003AEB90.f08 = 0;
            D_003AEB90.f04 = 0;
        }
    }
}
