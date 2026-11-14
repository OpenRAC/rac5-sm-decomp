/* LEVEL_03:0x0CE048 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_00347658[];
extern unsigned int func_087E78(int value);
extern int func_0B5E08(int index);
extern int func_0BC908(void);
extern void func_01A590(int a, int b);
extern int func_0B9490(int *o, int arg);
extern Rec *func_0BA1F0(int *v);
extern int func_132438(unsigned int idx, unsigned int val);

void func_0CE048(void)
{
    unsigned int flags = func_087E78(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0B5E08(7);
        func_0B5E08(0);
        func_01A590(4, 0);
    } else if (flags & 0x1000) {
        func_0B5E08(7);
        func_0B5E08(0);
        if (!func_0BC908()) {
            func_01A590(4, 0);
        }
    } else {
        func_0B9490(D_00347658, flags);
    }
    r = func_0BA1F0(D_00347658);
    if (r != 0 && r->w0DC != 0) {
        func_132438(0, r->w0DC);
    }
}
