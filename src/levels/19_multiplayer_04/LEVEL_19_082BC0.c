/* LEVEL_19.REL @ 0x082BC0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00240780;

void func_082BC0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00240780.f00 = 0;
            D_00240780.f0C = 1.0f;
            D_00240780.f08 = 0;
            D_00240780.f04 = 0;
        }
    }
}
