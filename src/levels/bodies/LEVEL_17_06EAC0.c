/* LEVEL_17.REL @ 0x06EAC0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001DE020;

void func_06EAC0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001DE020.f00 = 0;
            D_001DE020.f0C = 1.0f;
            D_001DE020.f08 = 0;
            D_001DE020.f04 = 0;
        }
    }
}
