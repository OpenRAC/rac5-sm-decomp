/* LEVEL_22:0x0B6F08 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_0015FF1C;
extern unsigned char D_0015FF30;
extern void (*D_0015FF44)(void);
extern Shared *D_0015332C;

struct Obj;
extern void func_10CB48(struct Obj *p);
extern void func_10A4E0(int value);
extern int func_10ACE0(int v);
extern int func_10A8C0(int a0, int a1);

void func_0B6F08(struct Obj *o)
{
    func_10CB48(o);
    func_10A4E0(0);
    func_10ACE0(D_0015FF1C);
    if (D_0015FF30 != 0 && D_0015FF44 != 0)
        D_0015FF44();
    func_10A8C0(D_0015332C->w1C6C, D_0015332C->w3C);
}
