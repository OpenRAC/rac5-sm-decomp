/* LEVEL_01.REL @ 0x0E7540 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0032D698;

void func_0E7540(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0032D698.f00 = 0;
            D_0032D698.f0C = 1.0f;
            D_0032D698.f08 = 0;
            D_0032D698.f04 = 0;
        }
    }
}
