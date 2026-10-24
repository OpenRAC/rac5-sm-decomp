/* LEVEL_16.REL @ 0x02F878 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001E1F78;

void func_02F878(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001E1F78.f00 = 0;
            D_001E1F78.f0C = 1.0f;
            D_001E1F78.f08 = 0;
            D_001E1F78.f04 = 0;
        }
    }
}
