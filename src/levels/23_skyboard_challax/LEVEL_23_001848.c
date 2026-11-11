/* LEVEL_23.REL @ 0x001848 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001F8D50;

void func_001848(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001F8D50.f00 = 0;
            D_001F8D50.f0C = 1.0f;
            D_001F8D50.f08 = 0;
            D_001F8D50.f04 = 0;
        }
    }
}
