/* LEVEL_09:0x0C5D08 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_001EA99C;
extern unsigned char D_001EA9B0;
extern void (*D_001EA9C4)(void);
extern Shared *D_001DDDAC;

struct Obj;
extern void func_12E610(struct Obj *p);
extern void func_12BFA8(int value);
extern int func_12C7A8(int v);
extern int func_12C388(int a0, int a1);

void func_0C5D08(struct Obj *o)
{
    func_12E610(o);
    func_12BFA8(0);
    func_12C7A8(D_001EA99C);
    if (D_001EA9B0 != 0 && D_001EA9C4 != 0)
        D_001EA9C4();
    func_12C388(D_001DDDAC->w1C6C, D_001DDDAC->w3C);
}
