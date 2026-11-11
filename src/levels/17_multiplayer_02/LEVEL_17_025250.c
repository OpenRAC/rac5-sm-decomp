/* LEVEL_17:0x025250 -- placement copy of FRONTEND_0034D8.c: counts a global down to zero, then runs a fixed update of a global record and a helper. */
struct Obj15 {
    char pad0[0x18];
    int w18;
    char pad1[0x1C - 0x1C];
    int w1C;
    char pad2[0x48 - 0x20];
    int w48;
    int w4C;
};

struct Slot9C {
    struct Obj15 *p;
};

extern int D_001950E0;
extern struct Slot9C D_001950B4;
void func_025308(void);

void func_025250(void)
{
    if (D_001950E0 != 0) {
        D_001950E0 = D_001950E0 - 1;
        if (D_001950E0 == 0) {
            if (D_001950B4.p->w48 >= 0) {
                D_001950B4.p->w1C = D_001950B4.p->w48;
                D_001950B4.p->w48 = -1;
                if (D_001950B4.p->w48 >= 0) {
                    D_001950B4.p->w18 = D_001950B4.p->w4C;
                    D_001950B4.p->w4C = -1;
                }
            }
            func_025308();
        }
    }
}
