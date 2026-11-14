/* LEVEL_15:0x0AE8A8 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_00244018[];
extern unsigned int func_06C700(int value);
extern int func_096530(int index);
extern int func_09D168(void);
extern void func_016A10(int a, int b);
extern int func_099CF0(int *o, int arg);
extern Rec *func_09AA50(int *v);
extern int func_0F2F38(unsigned int idx, unsigned int val);

void func_0AE8A8(void)
{
    unsigned int flags = func_06C700(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_096530(7);
        func_096530(0);
        func_016A10(4, 0);
    } else if (flags & 0x1000) {
        func_096530(7);
        func_096530(0);
        if (!func_09D168()) {
            func_016A10(4, 0);
        }
    } else {
        func_099CF0(D_00244018, flags);
    }
    r = func_09AA50(D_00244018);
    if (r != 0 && r->w0DC != 0) {
        func_0F2F38(0, r->w0DC);
    }
}
