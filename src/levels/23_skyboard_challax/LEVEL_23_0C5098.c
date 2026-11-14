/* LEVEL_23:0x0C5098 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_002FDC18[];
extern unsigned int func_07DEE0(int value);
extern int func_0ACDE8(int index);
extern int func_0B38C0(void);
extern void func_019338(int a, int b);
extern int func_0B0440(int *o, int arg);
extern Rec *func_0B11A0(int *v);
extern int func_1257E8(unsigned int idx, unsigned int val);

void func_0C5098(void)
{
    unsigned int flags = func_07DEE0(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0ACDE8(7);
        func_0ACDE8(0);
        func_019338(4, 0);
    } else if (flags & 0x1000) {
        func_0ACDE8(7);
        func_0ACDE8(0);
        if (!func_0B38C0()) {
            func_019338(4, 0);
        }
    } else {
        func_0B0440(D_002FDC18, flags);
    }
    r = func_0B11A0(D_002FDC18);
    if (r != 0 && r->w0DC != 0) {
        func_1257E8(0, r->w0DC);
    }
}
