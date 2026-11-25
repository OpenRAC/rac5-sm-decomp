/* LEVEL_09:0x0CC7B0 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
struct Item {
    char pad0[0xC];
    unsigned int f0C;
    char pad1[0x14 - 0x10];
    int f14;
};

struct Game {
    char pad0[0x1C68];
    unsigned int limit;
};

extern char D_00314120[];
extern struct Game *D_001DDDAC;
extern unsigned int D_001ED290;
extern unsigned char D_001ED298;
extern unsigned char D_001ED28C;
extern int D_001ED288;
extern int D_001EE3A8;

extern struct Item *func_0D56A8(char *p);
extern int func_023968(int a, int b);
extern int func_0CC750(struct Item *x);
extern unsigned int func_0849D8(int a);
extern int func_084980(int a);
extern int func_0D60C8(char *p);
extern int func_0B32D0(int a);
extern int func_0D5968(char *p, int b);

int func_0CC7B0(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0D56A8(D_00314120);
    if (x != 0) {
        if (func_023968(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0CC750)(x);
            D_001ED290 = x->f0C;
        }
    }
    if (D_001DDDAC->limit >= D_001ED290 && D_001ED298 != 0) {
        D_001ED28C = 1;
    } else {
        D_001ED28C = 0;
    }
    a = func_0849D8(0x6B10);
    b = func_084980(0x6B10);
    if ((a & 0x1008) != 0) {
        D_001ED288 = 3;
        return 3;
    }
    r = func_0D60C8(D_00314120);
    if (r == 1 && (a & 0x4000) != 0 && D_001ED28C != 0) {
        r2 = func_0B32D0(1);
        D_001EE3A8 = r;
        return r2;
    }
    return func_0D5968(D_00314120, b);
}
