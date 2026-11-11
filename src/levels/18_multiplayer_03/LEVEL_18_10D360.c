/* LEVEL_18.REL @ 0x10D360 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0029FF08;

void func_10D360(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0029FF08.f00 = 0;
            D_0029FF08.f0C = 1.0f;
            D_0029FF08.f08 = 0;
            D_0029FF08.f04 = 0;
        }
    }
}
