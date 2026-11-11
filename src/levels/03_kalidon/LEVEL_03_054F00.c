/* LEVEL_03.REL @ 0x054F00 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00253D50;

void func_054F00(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00253D50.f00 = 0;
            D_00253D50.f0C = 1.0f;
            D_00253D50.f08 = 0;
            D_00253D50.f04 = 0;
        }
    }
}
