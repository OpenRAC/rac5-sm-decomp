/* LEVEL_17:0x0BCEA0 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_0026BB58[];
extern unsigned int func_07A030(int value);
extern int func_0A4590(int index);
extern int func_0AB4E8(void);
extern void func_018518(int a, int b);
extern int func_0A7C38(int *o, int arg);
extern Rec *func_0A8998(int *v);
extern int func_110358(unsigned int idx, unsigned int val);

void func_0BCEA0(void)
{
    unsigned int flags = func_07A030(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0A4590(7);
        func_0A4590(0);
        func_018518(4, 0);
    } else if (flags & 0x1000) {
        func_0A4590(7);
        func_0A4590(0);
        if (!func_0AB4E8()) {
            func_018518(4, 0);
        }
    } else {
        func_0A7C38(D_0026BB58, flags);
    }
    r = func_0A8998(D_0026BB58);
    if (r != 0 && r->w0DC != 0) {
        func_110358(0, r->w0DC);
    }
}
