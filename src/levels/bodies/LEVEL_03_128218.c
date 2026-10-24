/* LEVEL_03.REL @ 0x128218 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0036C6F0;

void func_128218(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0036C6F0.f00 = 0;
            D_0036C6F0.f0C = 1.0f;
            D_0036C6F0.f08 = 0;
            D_0036C6F0.f04 = 0;
        }
    }
}
