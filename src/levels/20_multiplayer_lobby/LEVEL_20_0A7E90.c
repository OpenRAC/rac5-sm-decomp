/* LEVEL_20:0x0A7E90 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_0019E098[];
extern unsigned int func_067228(int value);
extern int func_08F6B0(int index);
extern int func_0964D8(void);
extern void func_016950(int a, int b);
extern int func_092C28(int *o, int arg);
extern Rec *func_093988(int *v);
extern int func_0E3BC8(unsigned int idx, unsigned int val);

void func_0A7E90(void)
{
    unsigned int flags = func_067228(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_08F6B0(7);
        func_08F6B0(0);
        func_016950(4, 0);
    } else if (flags & 0x1000) {
        func_08F6B0(7);
        func_08F6B0(0);
        if (!func_0964D8()) {
            func_016950(4, 0);
        }
    } else {
        func_092C28(D_0019E098, flags);
    }
    r = func_093988(D_0019E098);
    if (r != 0 && r->w0DC != 0) {
        func_0E3BC8(0, r->w0DC);
    }
}
