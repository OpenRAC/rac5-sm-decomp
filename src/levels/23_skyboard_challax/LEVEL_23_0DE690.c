/* LEVEL_23.REL @ 0x0DE690 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002FEB48;

void func_0DE690(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002FEB48.f00 = 0;
            D_002FEB48.f0C = 1.0f;
            D_002FEB48.f08 = 0;
            D_002FEB48.f04 = 0;
        }
    }
}
