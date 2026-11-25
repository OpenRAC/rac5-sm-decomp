/* LEVEL_17:0x0B6C08 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_001A2214;
extern unsigned char D_001A2228;
extern void (*D_001A223C)(void);
extern Shared *D_001950B4;

struct Obj;
extern void func_1112C0(struct Obj *p);
extern void func_10F310(int value);
extern int func_10FAF8(int v);
extern int func_10F6D0(int a0, int a1);

void func_0B6C08(struct Obj *o)
{
    func_1112C0(o);
    func_10F310(0);
    func_10FAF8(D_001A2214);
    if (D_001A2228 != 0 && D_001A223C != 0)
        D_001A223C();
    func_10F6D0(D_001950B4->w1C6C, D_001950B4->w3C);
}
