/* LEVEL_04.REL @ 0x019DC0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0024A340;

void func_019DC0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0024A340.f00 = 0;
            D_0024A340.f0C = 1.0f;
            D_0024A340.f08 = 0;
            D_0024A340.f04 = 0;
        }
    }
}
