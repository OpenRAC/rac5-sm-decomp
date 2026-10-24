/* LEVEL_03.REL @ 0x07B0D8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002554E0;

void func_07B0D8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002554E0.f00 = 0;
            D_002554E0.f0C = 1.0f;
            D_002554E0.f08 = 0;
            D_002554E0.f04 = 0;
        }
    }
}
