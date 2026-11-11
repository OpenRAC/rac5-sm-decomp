/* LEVEL_07.REL @ 0x0341D8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00248950;

void func_0341D8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00248950.f00 = 0;
            D_00248950.f0C = 1.0f;
            D_00248950.f08 = 0;
            D_00248950.f04 = 0;
        }
    }
}
