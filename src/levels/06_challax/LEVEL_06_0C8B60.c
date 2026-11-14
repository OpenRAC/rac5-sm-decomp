/* LEVEL_06:0x0C8B60 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_00319558[];
extern unsigned int func_080E98(int value);
extern int func_0B0848(int index);
extern int func_0B7420(void);
extern void func_019028(int a, int b);
extern int func_0B3FA8(int *o, int arg);
extern Rec *func_0B4D08(int *v);
extern int func_12A740(unsigned int idx, unsigned int val);

void func_0C8B60(void)
{
    unsigned int flags = func_080E98(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0B0848(7);
        func_0B0848(0);
        func_019028(4, 0);
    } else if (flags & 0x1000) {
        func_0B0848(7);
        func_0B0848(0);
        if (!func_0B7420()) {
            func_019028(4, 0);
        }
    } else {
        func_0B3FA8(D_00319558, flags);
    }
    r = func_0B4D08(D_00319558);
    if (r != 0 && r->w0DC != 0) {
        func_12A740(0, r->w0DC);
    }
}
