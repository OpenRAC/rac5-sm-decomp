/* LEVEL_24.REL @ 0x029680 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001FD838;

void func_029680(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001FD838.f00 = 0;
            D_001FD838.f0C = 1.0f;
            D_001FD838.f08 = 0;
            D_001FD838.f04 = 0;
        }
    }
}
