/* LEVEL_09.REL @ 0x1000C0 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_00318E08;

void func_1000C0(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_00318E08.f00 = 0;
            D_00318E08.f0C = 1.0f;
            D_00318E08.f08 = 0;
            D_00318E08.f04 = 0;
        }
    }
}
