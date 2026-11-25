/* LEVEL_07:0x0D1560 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_003422A0[];
extern struct Game *D_002082AC;
extern unsigned int D_00217790;
extern unsigned char D_00217798;
extern unsigned char D_0021778C;
extern int D_00217788;
extern int D_002188A8;

extern struct Item *func_0DA458(char *p);
extern int func_024C38(int a, int b);
extern int func_0D1500(struct Item *x);
extern unsigned int func_08A0F0(int a);
extern int func_08A098(int a);
extern int func_0DAE78(char *p);
extern int func_0B8080(int a);
extern int func_0DA718(char *p, int b);

int func_0D1560(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0DA458(D_003422A0);
    if (x != 0) {
        if (func_024C38(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0D1500)(x);
            D_00217790 = x->f0C;
        }
    }
    if (D_002082AC->limit >= D_00217790 && D_00217798 != 0) {
        D_0021778C = 1;
    } else {
        D_0021778C = 0;
    }
    a = func_08A0F0(0x6B10);
    b = func_08A098(0x6B10);
    if ((a & 0x1008) != 0) {
        D_00217788 = 3;
        return 3;
    }
    r = func_0DAE78(D_003422A0);
    if (r == 1 && (a & 0x4000) != 0 && D_0021778C != 0) {
        r2 = func_0B8080(1);
        D_002188A8 = r;
        return r2;
    }
    return func_0DA718(D_003422A0, b);
}
