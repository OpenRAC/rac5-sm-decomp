/* LEVEL_05.REL @ 0x103F78 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0031D598;

void func_103F78(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0031D598.f00 = 0;
            D_0031D598.f0C = 1.0f;
            D_0031D598.f08 = 0;
            D_0031D598.f04 = 0;
        }
    }
}
