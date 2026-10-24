/* LEVEL_19.REL @ 0x15D398 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002E57D0;

void func_15D398(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E57D0.f00 = 0;
            D_002E57D0.f0C = 1.0f;
            D_002E57D0.f08 = 0;
            D_002E57D0.f04 = 0;
        }
    }
}
