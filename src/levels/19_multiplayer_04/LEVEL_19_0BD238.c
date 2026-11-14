/* LEVEL_19:0x0BD238 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_0027A9D8[];
extern unsigned int func_079AA0(int value);
extern int func_0A4928(int index);
extern int func_0AB880(void);
extern void func_018898(int a, int b);
extern int func_0A7FD0(int *o, int arg);
extern Rec *func_0A8D30(int *v);
extern int func_111480(unsigned int idx, unsigned int val);

void func_0BD238(void)
{
    unsigned int flags = func_079AA0(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0A4928(7);
        func_0A4928(0);
        func_018898(4, 0);
    } else if (flags & 0x1000) {
        func_0A4928(7);
        func_0A4928(0);
        if (!func_0AB880()) {
            func_018898(4, 0);
        }
    } else {
        func_0A7FD0(D_0027A9D8, flags);
    }
    r = func_0A8D30(D_0027A9D8);
    if (r != 0 && r->w0DC != 0) {
        func_111480(0, r->w0DC);
    }
}
