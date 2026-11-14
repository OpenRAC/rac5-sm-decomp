/* LEVEL_08:0x0D9208 -- placement copy of LEVEL_01_0CE260.c: reacts to two input flag bits by queuing helper calls, then clears a field of the record found for a global entry. */
typedef struct { char pad00[0xDC]; int w0DC; } Rec;
extern int D_0037BA58[];
extern unsigned int func_090070(int value);
extern int func_0C0F10(int index);
extern int func_0C7A48(void);
extern void func_01B1A0(int a, int b);
extern int func_0C4598(int *o, int arg);
extern Rec *func_0C52F8(int *v);
extern int func_1455A8(unsigned int idx, unsigned int val);

void func_0D9208(void)
{
    unsigned int flags = func_090070(0x6B10);
    Rec *r;

    if (flags & 8) {
        func_0C0F10(7);
        func_0C0F10(0);
        func_01B1A0(4, 0);
    } else if (flags & 0x1000) {
        func_0C0F10(7);
        func_0C0F10(0);
        if (!func_0C7A48()) {
            func_01B1A0(4, 0);
        }
    } else {
        func_0C4598(D_0037BA58, flags);
    }
    r = func_0C52F8(D_0037BA58);
    if (r != 0 && r->w0DC != 0) {
        func_1455A8(0, r->w0DC);
    }
}
