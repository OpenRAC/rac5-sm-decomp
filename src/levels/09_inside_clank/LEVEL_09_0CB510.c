/* LEVEL_09:0x0CB510 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_00313F58[];
extern unsigned int func_0849D8(int value);
extern int func_0B32D0(int index);
extern int func_0B9DD0(void);
extern void func_019C18(int a, int b);
extern int func_0B6958(int *o, int arg);
extern Rec *func_0B76B8(int *v);
extern int func_12D008(unsigned int idx, unsigned int val);

void func_0CB510(void)
{
    unsigned int flags = func_0849D8(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0B32D0(7);
        func_0B32D0(0);
        func_019C18(4, 0);
    } else if (flags & 0x1000) {
        func_0B32D0(7);
        func_0B32D0(0);
        if (!func_0B9DD0()) {
            func_019C18(4, 0);
        }
    } else {
        func_0B6958(D_00313F58, flags);
    }
    r = func_0B76B8(D_00313F58);
    if (r != 0 && r->w0DC != 0) {
        func_12D008(0, r->w0DC);
    }
}
