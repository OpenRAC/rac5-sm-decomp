/* LEVEL_19.REL @ 0x0D5DA0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0027B898;

void func_0D5DA0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027B898.f00 = 0;
            D_0027B898.f0C = 1.0f;
            D_0027B898.f08 = 0;
            D_0027B898.f04 = 0;
        }
    }
}
