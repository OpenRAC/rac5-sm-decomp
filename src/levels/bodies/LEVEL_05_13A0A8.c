/* LEVEL_05.REL @ 0x13A0A8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0037D690;

void func_13A0A8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037D690.f00 = 0;
            D_0037D690.f0C = 1.0f;
            D_0037D690.f08 = 0;
            D_0037D690.f04 = 0;
        }
    }
}
