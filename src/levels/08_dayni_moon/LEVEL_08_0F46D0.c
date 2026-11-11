/* LEVEL_08.REL @ 0x0F46D0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0037C958;

void func_0F46D0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037C958.f00 = 0;
            D_0037C958.f0C = 1.0f;
            D_0037C958.f08 = 0;
            D_0037C958.f04 = 0;
        }
    }
}
