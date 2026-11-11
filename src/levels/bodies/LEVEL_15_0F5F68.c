/* LEVEL_15:0x0F5F68 -- allocates a 12-byte record through a helper, sets its flag word to one, and stores a fixed local address in its second word. */

struct Rec {
    int w0;
    int w4;
    unsigned char *w8;
};

extern unsigned char D_0016F170[];
extern unsigned char D_000F5F48[];

struct Rec *func_0D4FE0(int a, int b, unsigned char *c, int d);
void func_137308(void);

struct Rec *func_0F5F68(void)
{
    struct Rec *r;

    r = func_0D4FE0(12, 0, D_0016F170, 0x3FA);
    r->w4 = 1;
    r->w8 = D_000F5F48;
    return r;
}

/* LEVEL_15:0x0F5FB0 -- forwards to a helper with no arguments. */
void func_0F5FB0(void)
{
    func_137308();
}
