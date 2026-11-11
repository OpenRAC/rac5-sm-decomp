/* LEVEL_17.REL @ 0x024430 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001D0F10;

void func_024430(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001D0F10.f00 = 0;
            D_001D0F10.f0C = 1.0f;
            D_001D0F10.f08 = 0;
            D_001D0F10.f04 = 0;
        }
    }
}
