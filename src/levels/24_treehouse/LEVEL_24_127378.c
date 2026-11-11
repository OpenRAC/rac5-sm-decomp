/* LEVEL_24.REL @ 0x127378 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0031DB98;

void func_127378(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0031DB98.f00 = 0;
            D_0031DB98.f0C = 1.0f;
            D_0031DB98.f08 = 0;
            D_0031DB98.f04 = 0;
        }
    }
}
