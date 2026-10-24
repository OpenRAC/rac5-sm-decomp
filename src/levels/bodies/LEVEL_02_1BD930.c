/* LEVEL_02.REL @ 0x1BD930 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003AEF78;

void func_1BD930(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003AEF78.f00 = 0;
            D_003AEF78.f0C = 1.0f;
            D_003AEF78.f08 = 0;
            D_003AEF78.f04 = 0;
        }
    }
}
