/* LEVEL_24:0x0C2320 -- placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_001D181C;
extern unsigned char D_001D1830;
extern void (*D_001D1844)(void);
extern Shared *D_001C4C2C;

struct Obj;
extern void func_12B178(struct Obj *p);
extern void func_128B10(int value);
extern int func_129310(int v);
extern int func_128EF0(int a0, int a1);

void func_0C2320(struct Obj *o)
{
    func_12B178(o);
    func_128B10(0);
    func_129310(D_001D181C);
    if (D_001D1830 != 0 && D_001D1844 != 0)
        D_001D1844();
    func_128EF0(D_001C4C2C->w1C6C, D_001C4C2C->w3C);
}
