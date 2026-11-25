/* LEVEL_10:0x0C9E98 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_00209B9C;
extern unsigned char D_00209BB0;
extern void (*D_00209BC4)(void);
extern Shared *D_001FCFAC;

struct Obj;
extern void func_1334F8(struct Obj *p);
extern void func_130E70(int value);
extern int func_131690(int v);
extern int func_131270(int a0, int a1);

void func_0C9E98(struct Obj *o)
{
    func_1334F8(o);
    func_130E70(0);
    func_131690(D_00209B9C);
    if (D_00209BB0 != 0 && D_00209BC4 != 0)
        D_00209BC4();
    func_131270(D_001FCFAC->w1C6C, D_001FCFAC->w3C);
}
