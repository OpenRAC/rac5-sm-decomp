/* LEVEL_24.REL @ 0x1394E8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0035D828;

void func_1394E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0035D828.f00 = 0;
            D_0035D828.f0C = 1.0f;
            D_0035D828.f08 = 0;
            D_0035D828.f04 = 0;
        }
    }
}
