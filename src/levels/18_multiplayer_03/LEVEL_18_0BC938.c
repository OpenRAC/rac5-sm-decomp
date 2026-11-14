/* LEVEL_18:0x0BC938 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_0027ABD8[];
extern unsigned int func_078F38(int value);
extern int func_0A40A8(int index);
extern int func_0AAF80(void);
extern void func_0181E0(int a, int b);
extern int func_0A76D0(int *o, int arg);
extern Rec *func_0A8430(int *v);
extern int func_10FA90(unsigned int idx, unsigned int val);

void func_0BC938(void)
{
    unsigned int flags = func_078F38(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0A40A8(7);
        func_0A40A8(0);
        func_0181E0(4, 0);
    } else if (flags & 0x1000) {
        func_0A40A8(7);
        func_0A40A8(0);
        if (!func_0AAF80()) {
            func_0181E0(4, 0);
        }
    } else {
        func_0A76D0(D_0027ABD8, flags);
    }
    r = func_0A8430(D_0027ABD8);
    if (r != 0 && r->w0DC != 0) {
        func_10FA90(0, r->w0DC);
    }
}
