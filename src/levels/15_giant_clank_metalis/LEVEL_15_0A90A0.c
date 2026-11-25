/* LEVEL_15:0x0A90A0 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_0015581C;
extern unsigned char D_00155830;
extern void (*D_00155844)(void);
extern Shared *D_00148C2C;

struct Obj;
extern void func_0F4540(struct Obj *p);
extern void func_0F1ED8(int value);
extern int func_0F26D8(int v);
extern int func_0F22B8(int a0, int a1);

void func_0A90A0(struct Obj *o)
{
    func_0F4540(o);
    func_0F1ED8(0);
    func_0F26D8(D_0015581C);
    if (D_00155830 != 0 && D_00155844 != 0)
        D_00155844();
    func_0F22B8(D_00148C2C->w1C6C, D_00148C2C->w3C);
}
