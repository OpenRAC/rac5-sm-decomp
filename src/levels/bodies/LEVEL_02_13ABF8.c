/* LEVEL_02.REL @ 0x13ABF8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0039F2F0;

void func_13ABF8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0039F2F0.f00 = 0;
            D_0039F2F0.f0C = 1.0f;
            D_0039F2F0.f08 = 0;
            D_0039F2F0.f04 = 0;
        }
    }
}
