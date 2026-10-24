/* LEVEL_08.REL @ 0x119B88 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00380978;

void func_119B88(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00380978.f00 = 0;
            D_00380978.f0C = 1.0f;
            D_00380978.f08 = 0;
            D_00380978.f04 = 0;
        }
    }
}
