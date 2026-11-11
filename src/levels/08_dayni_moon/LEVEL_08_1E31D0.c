/* LEVEL_08.REL @ 0x1E31D0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003EA288;

void func_1E31D0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003EA288.f00 = 0;
            D_003EA288.f0C = 1.0f;
            D_003EA288.f08 = 0;
            D_003EA288.f04 = 0;
        }
    }
}
