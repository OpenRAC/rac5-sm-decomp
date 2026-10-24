/* LEVEL_08.REL @ 0x192918 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003E6C00;

void func_192918(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003E6C00.f00 = 0;
            D_003E6C00.f0C = 1.0f;
            D_003E6C00.f08 = 0;
            D_003E6C00.f04 = 0;
        }
    }
}
