/* LEVEL_06.REL @ 0x138F98 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0037E648;

void func_138F98(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037E648.f00 = 0;
            D_0037E648.f0C = 1.0f;
            D_0037E648.f08 = 0;
            D_0037E648.f04 = 0;
        }
    }
}
