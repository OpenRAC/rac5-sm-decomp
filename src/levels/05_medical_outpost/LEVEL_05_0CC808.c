/* LEVEL_05:0x0CC808 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_00318698[];
extern unsigned int func_085978(int value);
extern int func_0B45C8(int index);
extern int func_0BB0C8(void);
extern void func_019DC0(int a, int b);
extern int func_0B7C50(int *o, int arg);
extern Rec *func_0B89B0(int *v);
extern int func_12F9E8(unsigned int idx, unsigned int val);

void func_0CC808(void)
{
    unsigned int flags = func_085978(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0B45C8(7);
        func_0B45C8(0);
        func_019DC0(4, 0);
    } else if (flags & 0x1000) {
        func_0B45C8(7);
        func_0B45C8(0);
        if (!func_0BB0C8()) {
            func_019DC0(4, 0);
        }
    } else {
        func_0B7C50(D_00318698, flags);
    }
    r = func_0B89B0(D_00318698);
    if (r != 0 && r->w0DC != 0) {
        func_12F9E8(0, r->w0DC);
    }
}
