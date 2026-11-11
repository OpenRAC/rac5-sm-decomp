/* LEVEL_20.REL @ 0x0AFE80 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0019E898;

void func_0AFE80(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0019E898.f00 = 0;
            D_0019E898.f0C = 1.0f;
            D_0019E898.f08 = 0;
            D_0019E898.f04 = 0;
        }
    }
}
