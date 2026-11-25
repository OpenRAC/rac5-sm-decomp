/* LEVEL_18:0x0B66A0 -- placement copy of LEVEL_24_0C2320.c: placement copy of LEVEL_01_0C8A58.c: runs the reset sequence: object hook, mode setup, optional global callback, then the shared record pass. */
typedef struct {
    char pad0[0x3C];
    int w3C;
    char pad40[0x1C6C - 0x40];
    int w1C6C;
} Shared;

extern int D_001B0094;
extern unsigned char D_001B00A8;
extern void (*D_001B00BC)(void);
extern Shared *D_001A2F34;

struct Obj;
extern void func_1109F8(struct Obj *p);
extern void func_10EA48(int value);
extern int func_10F230(int v);
extern int func_10EE08(int a0, int a1);

void func_0B66A0(struct Obj *o)
{
    func_1109F8(o);
    func_10EA48(0);
    func_10F230(D_001B0094);
    if (D_001B00A8 != 0 && D_001B00BC != 0)
        D_001B00BC();
    func_10EE08(D_001A2F34->w1C6C, D_001A2F34->w3C);
}
