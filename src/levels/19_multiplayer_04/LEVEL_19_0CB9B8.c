/* LEVEL_19.REL @ 0x0CB9B8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0027B848;

void func_0CB9B8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027B848.f00 = 0;
            D_0027B848.f0C = 1.0f;
            D_0027B848.f08 = 0;
            D_0027B848.f04 = 0;
        }
    }
}
