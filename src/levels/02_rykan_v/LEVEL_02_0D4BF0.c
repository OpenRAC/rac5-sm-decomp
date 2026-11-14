/* LEVEL_02:0x0D4BF0 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_00343CD8[];
extern unsigned int func_08E950(int value);
extern int func_0BC930(int index);
extern int func_0C3430(void);
extern void func_01B188(int a, int b);
extern int func_0BFFB8(int *o, int arg);
extern Rec *func_0C0D18(int *v);
extern int func_13A420(unsigned int idx, unsigned int val);

void func_0D4BF0(void)
{
    unsigned int flags = func_08E950(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0BC930(7);
        func_0BC930(0);
        func_01B188(4, 0);
    } else if (flags & 0x1000) {
        func_0BC930(7);
        func_0BC930(0);
        if (!func_0C3430()) {
            func_01B188(4, 0);
        }
    } else {
        func_0BFFB8(D_00343CD8, flags);
    }
    r = func_0C0D18(D_00343CD8);
    if (r != 0 && r->w0DC != 0) {
        func_13A420(0, r->w0DC);
    }
}
