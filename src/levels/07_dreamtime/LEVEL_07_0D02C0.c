/* LEVEL_07:0x0D02C0 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_003420D8[];
extern unsigned int func_08A0F0(int value);
extern int func_0B8080(int index);
extern int func_0BEB80(void);
extern void func_01AEE8(int a, int b);
extern int func_0BB708(int *o, int arg);
extern Rec *func_0BC468(int *v);
extern int func_137070(unsigned int idx, unsigned int val);

void func_0D02C0(void)
{
    unsigned int flags = func_08A0F0(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0B8080(7);
        func_0B8080(0);
        func_01AEE8(4, 0);
    } else if (flags & 0x1000) {
        func_0B8080(7);
        func_0B8080(0);
        if (!func_0BEB80()) {
            func_01AEE8(4, 0);
        }
    } else {
        func_0BB708(D_003420D8, flags);
    }
    r = func_0BC468(D_003420D8);
    if (r != 0 && r->w0DC != 0) {
        func_137070(0, r->w0DC);
    }
}
