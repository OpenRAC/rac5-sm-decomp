/* LEVEL_03.REL @ 0x035610 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0024FA30;

void func_035610(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0024FA30.f00 = 0;
            D_0024FA30.f0C = 1.0f;
            D_0024FA30.f08 = 0;
            D_0024FA30.f04 = 0;
        }
    }
}
