/* LEVEL_06:0x0BEBA8 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_0A8ED8(int id, void *buf, float f);
extern int func_0A2E50(void *buf);
extern int func_0A2E80(void *buf);
extern int func_0A2EB0(void *buf);
extern int func_0A2F68(void *buf);
extern void func_0A5BB0(void *obj, short a, short b, short c, short d, int e);
extern char *func_0A0BB0(int);
extern void func_0BEC98(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_003160E8;
extern char *D_001EF29C;

void func_0BEBA8(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_0A8ED8(0x1F9, buf, 0.0f);
    p = &D_003160E8;
    a = (short)func_0A2E50(buf);
    b = (short)func_0A2E80(buf);
    c = (short)func_0A2EB0(buf);
    d = (short)func_0A2F68(buf);
    func_0A5BB0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_001EF29C = func_0A0BB0(0);
    func_0BEC98();
}
