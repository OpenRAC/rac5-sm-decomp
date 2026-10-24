/* LEVEL_06.REL @ 0x02D920 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_0021F570;

void func_02D920(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_0021F570.f00 = 0;
            D_0021F570.f0C = 1.0f;
            D_0021F570.f08 = 0;
            D_0021F570.f04 = 0;
        }
    }
}
