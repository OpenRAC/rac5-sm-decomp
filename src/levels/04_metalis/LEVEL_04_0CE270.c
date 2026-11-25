/* LEVEL_04:0x0CE270 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_0021A05C;
extern unsigned char D_0021A070;
extern void (*D_0021A084)(void);
extern Shared *D_0020D12C;

struct Obj;
extern void func_141AF8(struct Obj *p);
extern void func_13F490(int value);
extern int func_13FC90(int v);
extern int func_13F870(int a0, int a1);

void func_0CE270(struct Obj *o)
{
    func_141AF8(o);
    func_13F490(0);
    func_13FC90(D_0021A05C);
    if (D_0021A070 != 0 && D_0021A084 != 0)
        D_0021A084();
    func_13F870(D_0020D12C->w1C6C, D_0020D12C->w3C);
}
