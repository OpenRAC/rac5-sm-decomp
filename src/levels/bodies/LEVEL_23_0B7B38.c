/* LEVEL_23.REL @ 0x0B7B38 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002FA330;

void func_0B7B38(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002FA330.f00 = 0;
            D_002FA330.f0C = 1.0f;
            D_002FA330.f08 = 0;
            D_002FA330.f04 = 0;
        }
    }
}
