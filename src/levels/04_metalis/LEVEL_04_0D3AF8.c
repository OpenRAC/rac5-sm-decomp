/* LEVEL_04:0x0D3AF8 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_00346FD8[];
extern unsigned int func_08B2B8(int value);
extern int func_0BB828(int index);
extern int func_0C2338(void);
extern void func_01A4A8(int a, int b);
extern int func_0BEE88(int *o, int arg);
extern Rec *func_0BFBE8(int *v);
extern int func_1404F0(unsigned int idx, unsigned int val);

void func_0D3AF8(void)
{
    unsigned int flags = func_08B2B8(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0BB828(7);
        func_0BB828(0);
        func_01A4A8(4, 0);
    } else if (flags & 0x1000) {
        func_0BB828(7);
        func_0BB828(0);
        if (!func_0C2338()) {
            func_01A4A8(4, 0);
        }
    } else {
        func_0BEE88(D_00346FD8, flags);
    }
    r = func_0BFBE8(D_00346FD8);
    if (r != 0 && r->w0DC != 0) {
        func_1404F0(0, r->w0DC);
    }
}
