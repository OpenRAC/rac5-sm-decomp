/* LEVEL_04.REL @ 0x0CF578 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_003467B8;

void func_0CF578(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_003467B8.f00 = 0;
            D_003467B8.f0C = 1.0f;
            D_003467B8.f08 = 0;
            D_003467B8.f04 = 0;
        }
    }
}
