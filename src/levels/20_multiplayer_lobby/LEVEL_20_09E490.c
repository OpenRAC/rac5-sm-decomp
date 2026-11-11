/* LEVEL_20.REL @ 0x09E490 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0019AC40;

void func_09E490(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0019AC40.f00 = 0;
            D_0019AC40.f0C = 1.0f;
            D_0019AC40.f08 = 0;
            D_0019AC40.f04 = 0;
        }
    }
}
