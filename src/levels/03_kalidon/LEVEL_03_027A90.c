/* LEVEL_03:0x027A90 -- placement copy of FRONTEND_0034D8.c: counts a global down to zero, then runs a fixed update of a global record and a helper. */
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

extern int D_0020C634;
extern struct Slot9C D_0020C62C;
void func_027B48(void);

void func_027A90(void)
{
    if (D_0020C634 != 0) {
        D_0020C634 = D_0020C634 - 1;
        if (D_0020C634 == 0) {
            if (D_0020C62C.p->w48 >= 0) {
                D_0020C62C.p->w1C = D_0020C62C.p->w48;
                D_0020C62C.p->w48 = -1;
                if (D_0020C62C.p->w48 >= 0) {
                    D_0020C62C.p->w18 = D_0020C62C.p->w4C;
                    D_0020C62C.p->w4C = -1;
                }
            }
            func_027B48();
        }
    }
}
