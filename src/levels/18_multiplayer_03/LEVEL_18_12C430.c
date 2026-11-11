/* LEVEL_18.REL @ 0x12C430 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002E2F00;

void func_12C430(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002E2F00.f00 = 0;
            D_002E2F00.f0C = 1.0f;
            D_002E2F00.f08 = 0;
            D_002E2F00.f04 = 0;
        }
    }
}
