/* LEVEL_15:0x021B60 -- placement copy of FRONTEND_0034D8.c: counts a global down to zero, then runs a fixed update of a global record and a helper. */
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

extern int D_00148C34;
extern struct Slot9C D_00148C2C;
void func_021C18(void);

void func_021B60(void)
{
    if (D_00148C34 != 0) {
        D_00148C34 = D_00148C34 - 1;
        if (D_00148C34 == 0) {
            if (D_00148C2C.p->w48 >= 0) {
                D_00148C2C.p->w1C = D_00148C2C.p->w48;
                D_00148C2C.p->w48 = -1;
                if (D_00148C2C.p->w48 >= 0) {
                    D_00148C2C.p->w18 = D_00148C2C.p->w4C;
                    D_00148C2C.p->w4C = -1;
                }
            }
            func_021C18();
        }
    }
}
