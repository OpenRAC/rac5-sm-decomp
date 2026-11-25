/* LEVEL_19:0x0B6FA0 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_001AFD94;
extern unsigned char D_001AFDA8;
extern void (*D_001AFDBC)(void);
extern Shared *D_001A2C34;

struct Obj;
extern void func_1123E8(struct Obj *p);
extern void func_110438(int value);
extern int func_110C20(int v);
extern int func_1107F8(int a0, int a1);

void func_0B6FA0(struct Obj *o)
{
    func_1123E8(o);
    func_110438(0);
    func_110C20(D_001AFD94);
    if (D_001AFDA8 != 0 && D_001AFDBC != 0)
        D_001AFDBC();
    func_1107F8(D_001A2C34->w1C6C, D_001A2C34->w3C);
}
