/* LEVEL_04.REL @ 0x136430 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0036C070;

void func_136430(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0036C070.f00 = 0;
            D_0036C070.f0C = 1.0f;
            D_0036C070.f08 = 0;
            D_0036C070.f04 = 0;
        }
    }
}
