/* LEVEL_22:0x0B2758 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_09CD18(int id, void *buf, float f);
extern int func_096C90(void *buf);
extern int func_096CC0(void *buf);
extern int func_096CF0(void *buf);
extern int func_096DA8(void *buf);
extern void func_0999F0(void *obj, short a, short b, short c, short d, int e);
extern char *func_0949F0(int);
extern void func_0B2848(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_0027EF28;
extern char *D_0015F71C;

void func_0B2758(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_09CD18(0x1F9, buf, 0.0f);
    p = &D_0027EF28;
    a = (short)func_096C90(buf);
    b = (short)func_096CC0(buf);
    c = (short)func_096CF0(buf);
    d = (short)func_096DA8(buf);
    func_0999F0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_0015F71C = func_0949F0(0);
    func_0B2848();
}
