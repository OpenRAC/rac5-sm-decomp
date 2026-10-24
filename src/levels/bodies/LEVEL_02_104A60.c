/* LEVEL_02.REL @ 0x104A60 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00348B38;

void func_104A60(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00348B38.f00 = 0;
            D_00348B38.f0C = 1.0f;
            D_00348B38.f08 = 0;
            D_00348B38.f04 = 0;
        }
    }
}
