/* LEVEL_08.REL @ 0x0E1648 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0037C278;

void func_0E1648(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037C278.f00 = 0;
            D_0037C278.f0C = 1.0f;
            D_0037C278.f08 = 0;
            D_0037C278.f04 = 0;
        }
    }
}
