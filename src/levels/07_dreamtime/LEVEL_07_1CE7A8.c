/* LEVEL_07.REL @ 0x1CE7A8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003AE000;

void func_1CE7A8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AE000.f00 = 0;
            D_003AE000.f0C = 1.0f;
            D_003AE000.f08 = 0;
            D_003AE000.f04 = 0;
        }
    }
}
