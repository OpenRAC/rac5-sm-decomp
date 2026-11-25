/* LEVEL_01:0x0C8A58 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_00200B9C;
extern unsigned char D_00200BB0;
extern void (*D_00200BC4)(void);
extern Shared *D_001F3FAC;

struct Obj;
extern void func_135678(struct Obj *p);
extern void func_133010(int value);
extern int func_133810(int v);
extern int func_1333F0(int a0, int a1);

void func_0C8A58(struct Obj *o)
{
    func_135678(o);
    func_133010(0);
    func_133810(D_00200B9C);
    if (D_00200BB0 != 0 && D_00200BC4 != 0)
        D_00200BC4();
    func_1333F0(D_001F3FAC->w1C6C, D_001F3FAC->w3C);
}
