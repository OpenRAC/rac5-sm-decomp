/* LEVEL_19.REL @ 0x141B28 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002E4BE8;

void func_141B28(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E4BE8.f00 = 0;
            D_002E4BE8.f0C = 1.0f;
            D_002E4BE8.f08 = 0;
            D_002E4BE8.f04 = 0;
        }
    }
}
