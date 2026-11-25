/* LEVEL_06:0x0C3358 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_001EFA9C;
extern unsigned char D_001EFAB0;
extern void (*D_001EFAC4)(void);
extern Shared *D_001E2EAC;

struct Obj;
extern void func_12BD48(struct Obj *p);
extern void func_1296E0(int value);
extern int func_129EE0(int v);
extern int func_129AC0(int a0, int a1);

void func_0C3358(struct Obj *o)
{
    func_12BD48(o);
    func_1296E0(0);
    func_129EE0(D_001EFA9C);
    if (D_001EFAB0 != 0 && D_001EFAC4 != 0)
        D_001EFAC4();
    func_129AC0(D_001E2EAC->w1C6C, D_001E2EAC->w3C);
}
