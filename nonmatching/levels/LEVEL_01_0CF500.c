/* LEVEL_01.REL:0x0CF500: reviewed 320-byte candidate, held for ABI review.
 * Refreshes the pending-item state and the ready flag, then either latches a
 * confirmed choice or forwards the request.
 * pinned C with gnu-ee-trial links 320/320 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0D83F8 returning pointer with (pointer), but the accepted
 * LEVEL_01_0D83F8.c defines it returning int with (pointer).
 * It declares func_0CF4A0 returning void with (pointer), but the accepted
 * LEVEL_01_0CF4A0.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern char D_0032C9A0[];
extern struct Game *D_001F3FAC;
extern unsigned int D_00203490;
extern unsigned char D_00203498;
extern unsigned char D_0020348C;
extern int D_00203488;
extern int D_002045A8;

extern struct Item *func_0D83F8(char *p);
extern int func_024670(int a, int b);
extern void func_0CF4A0(struct Item *x);
extern unsigned int func_088020(int a);
extern int func_087FC8(int a);
extern int func_0D8E18(char *p);
extern int func_0B6020(int a);
extern int func_0D86B8(char *p, int b);

int func_0CF500(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0D83F8(D_0032C9A0);
    if (x != 0) {
        if (func_024670(x->f14, -1) != 0) {
            func_0CF4A0(x);
            D_00203490 = x->f0C;
        }
    }
    if (D_001F3FAC->limit >= D_00203490 && D_00203498 != 0) {
        D_0020348C = 1;
    } else {
        D_0020348C = 0;
    }
    a = func_088020(0x6B10);
    b = func_087FC8(0x6B10);
    if ((a & 0x1008) != 0) {
        D_00203488 = 3;
        return 3;
    }
    r = func_0D8E18(D_0032C9A0);
    if (r == 1 && (a & 0x4000) != 0 && D_0020348C != 0) {
        r2 = func_0B6020(1);
        D_002045A8 = r;
        return r2;
    }
    return func_0D86B8(D_0032C9A0, b);
}
