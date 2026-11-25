/* LEVEL_20:0x0A1BF8 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_001112F4;
extern unsigned char D_00111308;
extern void (*D_0011131C)(void);
extern Shared *D_00104194;

struct Obj;
extern void func_0E4B30(struct Obj *p);
extern void func_0E2B80(int value);
extern int func_0E3368(int v);
extern int func_0E2F40(int a0, int a1);

void func_0A1BF8(struct Obj *o)
{
    func_0E4B30(o);
    func_0E2B80(0);
    func_0E3368(D_001112F4);
    if (D_00111308 != 0 && D_0011131C != 0)
        D_0011131C();
    func_0E2F40(D_00104194->w1C6C, D_00104194->w3C);
}
