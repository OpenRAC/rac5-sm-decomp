/* LEVEL_09.REL @ 0x18CE80 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0037E908;

void func_18CE80(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0037E908.f00 = 0;
            D_0037E908.f0C = 1.0f;
            D_0037E908.f08 = 0;
            D_0037E908.f04 = 0;
        }
    }
}
