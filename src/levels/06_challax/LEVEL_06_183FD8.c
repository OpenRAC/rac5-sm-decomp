/* LEVEL_06.REL @ 0x183FD8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00383998;

void func_183FD8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00383998.f00 = 0;
            D_00383998.f0C = 1.0f;
            D_00383998.f08 = 0;
            D_00383998.f04 = 0;
        }
    }
}
