/* LEVEL_05.REL @ 0x1A5F90 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0038F740;

void func_1A5F90(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0038F740.f00 = 0;
            D_0038F740.f0C = 1.0f;
            D_0038F740.f08 = 0;
            D_0038F740.f04 = 0;
        }
    }
}
