/* LEVEL_03.REL @ 0x000B60 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00246700;

void func_000B60(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00246700.f00 = 0;
            D_00246700.f0C = 1.0f;
            D_00246700.f08 = 0;
            D_00246700.f04 = 0;
        }
    }
}
