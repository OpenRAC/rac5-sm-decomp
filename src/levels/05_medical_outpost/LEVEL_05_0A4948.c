/* LEVEL_05.REL @ 0x0A4948 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0029F308;

void func_0A4948(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0029F308.f00 = 0;
            D_0029F308.f0C = 1.0f;
            D_0029F308.f08 = 0;
            D_0029F308.f04 = 0;
        }
    }
}
