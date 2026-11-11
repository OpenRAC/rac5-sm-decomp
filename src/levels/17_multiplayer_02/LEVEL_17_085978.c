/* LEVEL_17.REL @ 0x085978 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0023F530;

void func_085978(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0023F530.f00 = 0;
            D_0023F530.f0C = 1.0f;
            D_0023F530.f08 = 0;
            D_0023F530.f04 = 0;
        }
    }
}
