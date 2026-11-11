/* LEVEL_16:0x087438 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
typedef struct {
    int pad0[2];
    char *page;
    int pad3;
} Slot;
typedef struct {
    char pad0[4];
    Slot *slots;
    int count;
    char subC[0x14];
    char sub20[0x14];
    char *pages;
    int size;
    char pad3C[0x2C48 - 0x3C];
    char ready;
} G;
extern G D_0024E6D0;
extern const char D_001C55E0[];
extern void func_087380(void);
extern void *func_0F03B8(int size, int a, const char *file, int line);
extern void func_088BE8(void *p, int n);
extern void func_088C30(void *p, int n);
extern void func_0871F8(void);

void func_087438(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_087380();
    if (D_0024E6D0.count > 0) {
        D_0024E6D0.size = D_0024E6D0.count << 12;
        D_0024E6D0.slots = func_0F03B8(D_0024E6D0.count << 4, 0, D_001C55E0, 0x2BD);
        n = D_0024E6D0.count;
        func_088BE8(D_0024E6D0.subC, n);
        func_088C30(D_0024E6D0.sub20, n << 3);
        D_0024E6D0.pages = func_0F03B8(D_0024E6D0.size, 0, D_001C55E0, 0x2C4);
        p = D_0024E6D0.pages;
        s = D_0024E6D0.slots;
        end = s + D_0024E6D0.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_0871F8();
    }
    D_0024E6D0.ready = 1;
}
