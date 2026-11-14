/* LEVEL_16:0x0BD960 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_0027A858[];
extern unsigned int func_0795B8(int value);
extern int func_0A50B0(int index);
extern int func_0ABFA8(void);
extern void func_018B98(int a, int b);
extern int func_0A86F8(int *o, int arg);
extern Rec *func_0A9458(int *v);
extern int func_110DE0(unsigned int idx, unsigned int val);

void func_0BD960(void)
{
    unsigned int flags = func_0795B8(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0A50B0(7);
        func_0A50B0(0);
        func_018B98(4, 0);
    } else if (flags & 0x1000) {
        func_0A50B0(7);
        func_0A50B0(0);
        if (!func_0ABFA8()) {
            func_018B98(4, 0);
        }
    } else {
        func_0A86F8(D_0027A858, flags);
    }
    r = func_0A9458(D_0027A858);
    if (r != 0 && r->w0DC != 0) {
        func_110DE0(0, r->w0DC);
    }
}
