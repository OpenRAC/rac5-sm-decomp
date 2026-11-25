/* LEVEL_05:0x0C7000 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_001EFF1C;
extern unsigned char D_001EFF30;
extern void (*D_001EFF44)(void);
extern Shared *D_001E332C;

struct Obj;
extern void func_130FF0(struct Obj *p);
extern void func_12E988(int value);
extern int func_12F188(int v);
extern int func_12ED68(int a0, int a1);

void func_0C7000(struct Obj *o)
{
    func_130FF0(o);
    func_12E988(0);
    func_12F188(D_001EFF1C);
    if (D_001EFF30 != 0 && D_001EFF44 != 0)
        D_001EFF44();
    func_12ED68(D_001E332C->w1C6C, D_001E332C->w3C);
}
