/* LEVEL_03.REL @ 0x10DCF8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0034C630;

void func_10DCF8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0034C630.f00 = 0;
            D_0034C630.f0C = 1.0f;
            D_0034C630.f08 = 0;
            D_0034C630.f04 = 0;
        }
    }
}
