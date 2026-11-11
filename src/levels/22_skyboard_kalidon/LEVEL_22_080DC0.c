/* LEVEL_22.REL @ 0x080DC0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001AFD20;

void func_080DC0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001AFD20.f00 = 0;
            D_001AFD20.f0C = 1.0f;
            D_001AFD20.f08 = 0;
            D_001AFD20.f04 = 0;
        }
    }
}
