/* FRONTEND:0x0034D8 -- counts a global down to zero, then runs a fixed update of a global record and a helper. */
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

extern int D_00027EA4;
extern struct Slot9C D_00027E9C;
void func_003590(void);

void func_0034D8(void)
{
    if (D_00027EA4 != 0) {
        D_00027EA4 = D_00027EA4 - 1;
        if (D_00027EA4 == 0) {
            if (D_00027E9C.p->w48 >= 0) {
                D_00027E9C.p->w1C = D_00027E9C.p->w48;
                D_00027E9C.p->w48 = -1;
                if (D_00027E9C.p->w48 >= 0) {
                    D_00027E9C.p->w18 = D_00027E9C.p->w4C;
                    D_00027E9C.p->w4C = -1;
                }
            }
            func_003590();
        }
    }
}
