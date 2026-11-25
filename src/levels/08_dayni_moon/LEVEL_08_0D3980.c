/* LEVEL_08:0x0D3980 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_00249A5C;
extern unsigned char D_00249A70;
extern void (*D_00249A84)(void);
extern Shared *D_0023CB2C;

struct Obj;
extern void func_146BB0(struct Obj *p);
extern void func_144548(int value);
extern int func_144D48(int v);
extern int func_144928(int a0, int a1);

void func_0D3980(struct Obj *o)
{
    func_146BB0(o);
    func_144548(0);
    func_144D48(D_00249A5C);
    if (D_00249A70 != 0 && D_00249A84 != 0)
        D_00249A84();
    func_144928(D_0023CB2C->w1C6C, D_0023CB2C->w3C);
}
