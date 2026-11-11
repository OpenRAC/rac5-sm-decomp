/* LEVEL_09.REL @ 0x180AB0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0037E388;

void func_180AB0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037E388.f00 = 0;
            D_0037E388.f0C = 1.0f;
            D_0037E388.f08 = 0;
            D_0037E388.f04 = 0;
        }
    }
}
