/* LEVEL_03:0x0C8840 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_0021921C;
extern unsigned char D_00219230;
extern void (*D_00219244)(void);
extern Shared *D_0020C62C;

struct Obj;
extern void func_133A40(struct Obj *p);
extern void func_1313D8(int value);
extern int func_131BD8(int v);
extern int func_1317B8(int a0, int a1);

void func_0C8840(struct Obj *o)
{
    func_133A40(o);
    func_1313D8(0);
    func_131BD8(D_0021921C);
    if (D_00219230 != 0 && D_00219244 != 0)
        D_00219244();
    func_1317B8(D_0020C62C->w1C6C, D_0020C62C->w3C);
}
