/* LEVEL_02:0x0CF368 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_00215B5C;
extern unsigned char D_00215B70;
extern void (*D_00215B84)(void);
extern Shared *D_00208C2C;

struct Obj;
extern void func_13BA28(struct Obj *p);
extern void func_1393C0(int value);
extern int func_139BC0(int v);
extern int func_1397A0(int a0, int a1);

void func_0CF368(struct Obj *o)
{
    func_13BA28(o);
    func_1393C0(0);
    func_139BC0(D_00215B5C);
    if (D_00215B70 != 0 && D_00215B84 != 0)
        D_00215B84();
    func_1397A0(D_00208C2C->w1C6C, D_00208C2C->w3C);
}
