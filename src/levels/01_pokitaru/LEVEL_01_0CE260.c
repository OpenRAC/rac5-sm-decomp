/* LEVEL_01:0x0CE260 -- reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_0032C7D8[];
extern unsigned int func_088020(int value);
extern int func_0B6020(int index);
extern int func_0BCB20(void);
extern void func_01A828(int a, int b);
extern int func_0B96A8(int *o, int arg);
extern Rec *func_0BA408(int *v);
extern int func_134070(unsigned int idx, unsigned int val);

void func_0CE260(void)
{
    unsigned int flags = func_088020(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0B6020(7);
        func_0B6020(0);
        func_01A828(4, 0);
    } else if (flags & 0x1000) {
        func_0B6020(7);
        func_0B6020(0);
        if (!func_0BCB20()) {
            func_01A828(4, 0);
        }
    } else {
        func_0B96A8(D_0032C7D8, flags);
    }
    r = func_0BA408(D_0032C7D8);
    if (r != 0 && r->w0DC != 0) {
        func_134070(0, r->w0DC);
    }
}
