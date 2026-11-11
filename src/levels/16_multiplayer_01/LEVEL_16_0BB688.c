/* LEVEL_16.REL @ 0x0BB688 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0027A038;

void func_0BB688(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027A038.f00 = 0;
            D_0027A038.f0C = 1.0f;
            D_0027A038.f08 = 0;
            D_0027A038.f04 = 0;
        }
    }
}
