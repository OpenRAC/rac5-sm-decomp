/* LEVEL_22:0x0BC7A8 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_00282398[];
extern unsigned int func_079438(int value);
extern int func_0A4570(int index);
extern int func_0AAFD0(void);
extern void func_016E40(int a, int b);
extern int func_0A7B50(int *o, int arg);
extern Rec *func_0A88B0(int *v);
extern int func_10B540(unsigned int idx, unsigned int val);

void func_0BC7A8(void)
{
    unsigned int flags = func_079438(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0A4570(7);
        func_0A4570(0);
        func_016E40(4, 0);
    } else if (flags & 0x1000) {
        func_0A4570(7);
        func_0A4570(0);
        if (!func_0AAFD0()) {
            func_016E40(4, 0);
        }
    } else {
        func_0A7B50(D_00282398, flags);
    }
    r = func_0A88B0(D_00282398);
    if (r != 0 && r->w0DC != 0) {
        func_10B540(0, r->w0DC);
    }
}
