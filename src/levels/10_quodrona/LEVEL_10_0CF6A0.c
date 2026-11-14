/* LEVEL_10:0x0CF6A0 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_00335BD8[];
extern unsigned int func_088388(int value);
extern int func_0B71F8(int index);
extern int func_0BDE70(void);
extern void func_019EA8(int a, int b);
extern int func_0BA9F0(int *o, int arg);
extern Rec *func_0BB750(int *v);
extern int func_131EF0(unsigned int idx, unsigned int val);

void func_0CF6A0(void)
{
    unsigned int flags = func_088388(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0B71F8(7);
        func_0B71F8(0);
        func_019EA8(4, 0);
    } else if (flags & 0x1000) {
        func_0B71F8(7);
        func_0B71F8(0);
        if (!func_0BDE70()) {
            func_019EA8(4, 0);
        }
    } else {
        func_0BA9F0(D_00335BD8, flags);
    }
    r = func_0BB750(D_00335BD8);
    if (r != 0 && r->w0DC != 0) {
        func_131EF0(0, r->w0DC);
    }
}
