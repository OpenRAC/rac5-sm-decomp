/* LEVEL_24.REL @ 0x139290 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0035D798;

void func_139290(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0035D798.f00 = 0;
            D_0035D798.f0C = 1.0f;
            D_0035D798.f08 = 0;
            D_0035D798.f04 = 0;
        }
    }
}
