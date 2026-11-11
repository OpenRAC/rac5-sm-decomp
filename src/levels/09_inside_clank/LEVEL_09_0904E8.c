/* LEVEL_09.REL @ 0x0904E8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0027F880;

void func_0904E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0027F880.f00 = 0;
            D_0027F880.f0C = 1.0f;
            D_0027F880.f08 = 0;
            D_0027F880.f04 = 0;
        }
    }
}
