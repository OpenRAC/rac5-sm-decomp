/* LEVEL_16:0x0B76C8 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_001AEC14;
extern unsigned char D_001AEC28;
extern void (*D_001AEC3C)(void);
extern Shared *D_001A1AB4;

struct Obj;
extern void func_111D48(struct Obj *p);
extern void func_10FD98(int value);
extern int func_110580(int v);
extern int func_110158(int a0, int a1);

void func_0B76C8(struct Obj *o)
{
    func_111D48(o);
    func_10FD98(0);
    func_110580(D_001AEC14);
    if (D_001AEC28 != 0 && D_001AEC3C != 0)
        D_001AEC3C();
    func_110158(D_001A1AB4->w1C6C, D_001A1AB4->w3C);
}
