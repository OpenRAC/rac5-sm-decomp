/* LEVEL_16.REL @ 0x015678 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_001DE4D8;

void func_015678(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_001DE4D8.f00 = 0;
            D_001DE4D8.f0C = 1.0f;
            D_001DE4D8.f08 = 0;
            D_001DE4D8.f04 = 0;
        }
    }
}
