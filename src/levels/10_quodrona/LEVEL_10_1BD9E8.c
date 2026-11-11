/* LEVEL_10.REL @ 0x1BD9E8 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003A1A40;

void func_1BD9E8(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003A1A40.f00 = 0;
            D_003A1A40.f0C = 1.0f;
            D_003A1A40.f08 = 0;
            D_003A1A40.f04 = 0;
        }
    }
}
