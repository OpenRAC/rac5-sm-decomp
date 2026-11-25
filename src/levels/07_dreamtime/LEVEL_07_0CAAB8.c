/* LEVEL_07:0x0CAAB8 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_00214E9C;
extern unsigned char D_00214EB0;
extern void (*D_00214EC4)(void);
extern Shared *D_002082AC;

struct Obj;
extern void func_138678(struct Obj *p);
extern void func_136010(int value);
extern int func_136810(int v);
extern int func_1363F0(int a0, int a1);

void func_0CAAB8(struct Obj *o)
{
    func_138678(o);
    func_136010(0);
    func_136810(D_00214E9C);
    if (D_00214EB0 != 0 && D_00214EC4 != 0)
        D_00214EC4();
    func_1363F0(D_002082AC->w1C6C, D_002082AC->w3C);
}
