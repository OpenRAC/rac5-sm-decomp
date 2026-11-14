/* LEVEL_24:0x0C7BA8 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_002F8698[];
extern unsigned int func_0812C0(int value);
extern int func_0AF8B0(int index);
extern int func_0B63E8(void);
extern void func_018E18(int a, int b);
extern int func_0B2F38(int *o, int arg);
extern Rec *func_0B3C98(int *v);
extern int func_129B70(unsigned int idx, unsigned int val);

void func_0C7BA8(void)
{
    unsigned int flags = func_0812C0(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0AF8B0(7);
        func_0AF8B0(0);
        func_018E18(4, 0);
    } else if (flags & 0x1000) {
        func_0AF8B0(7);
        func_0AF8B0(0);
        if (!func_0B63E8()) {
            func_018E18(4, 0);
        }
    } else {
        func_0B2F38(D_002F8698, flags);
    }
    r = func_0B3C98(D_002F8698);
    if (r != 0 && r->w0DC != 0) {
        func_129B70(0, r->w0DC);
    }
}
