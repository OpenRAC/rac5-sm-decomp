/* LEVEL_10.REL @ 0x1AC688 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003A0470;

void func_1AC688(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003A0470.f00 = 0;
            D_003A0470.f0C = 1.0f;
            D_003A0470.f08 = 0;
            D_003A0470.f04 = 0;
        }
    }
}
