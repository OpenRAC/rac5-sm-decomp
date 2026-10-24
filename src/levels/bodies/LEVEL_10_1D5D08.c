/* LEVEL_10.REL @ 0x1D5D08 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003A2240;

void func_1D5D08(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003A2240.f00 = 0;
            D_003A2240.f0C = 1.0f;
            D_003A2240.f08 = 0;
            D_003A2240.f04 = 0;
        }
    }
}
