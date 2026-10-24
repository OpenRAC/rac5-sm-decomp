/* LEVEL_19.REL @ 0x0A7F78 — 56 octets, swc1 */
typedef struct {
    int f00;
    int f04;
    int f08;
    float f0C;
} Rec;

extern Rec D_002767F8;

void func_0A7F78(int a0, int a1)
{
    if (a1 == 0xFFFF) {
        if (a0 != 0) {
            D_002767F8.f00 = 0;
            D_002767F8.f0C = 1.0f;
            D_002767F8.f08 = 0;
            D_002767F8.f04 = 0;
        }
    }
}
