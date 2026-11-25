/* LEVEL_19:0x0B3038 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_09C688(int id, void *buf, float f);
extern int func_0965A0(void *buf);
extern int func_0965D0(void *buf);
extern int func_096600(void *buf);
extern int func_0966B8(void *buf);
extern void func_099360(void *obj, short a, short b, short c, short d, int e);
extern int func_094F50(void);
extern void func_0B3128(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_00277428;
extern char *D_001AF594;

void func_0B3038(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_09C688(0x1F9, buf, 0.0f);
    p = &D_00277428;
    a = (short)func_0965A0(buf);
    b = (short)func_0965D0(buf);
    c = (short)func_096600(buf);
    d = (short)func_0966B8(buf);
    func_099360(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_001AF594 = ((char *(*)(int))func_094F50)(0);
    func_0B3128();
}
