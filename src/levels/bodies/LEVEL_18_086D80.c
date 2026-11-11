/* LEVEL_18:0x086D80 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_0024EA50;
extern const char D_001C6B60[];
extern void func_086CC8(void);
extern void *func_0EEBF0(int size, int a, const char *file, int line);
extern void func_088530(void *p, int n);
extern void func_088578(void *p, int n);
extern void func_086B40(void);

void func_086D80(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_086CC8();
    if (D_0024EA50.count > 0) {
        D_0024EA50.size = D_0024EA50.count << 12;
        D_0024EA50.slots = func_0EEBF0(D_0024EA50.count << 4, 0, D_001C6B60, 0x2BD);
        n = D_0024EA50.count;
        func_088530(D_0024EA50.subC, n);
        func_088578(D_0024EA50.sub20, n << 3);
        D_0024EA50.pages = func_0EEBF0(D_0024EA50.size, 0, D_001C6B60, 0x2C4);
        p = D_0024EA50.pages;
        s = D_0024EA50.slots;
        end = s + D_0024EA50.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_086B40();
    }
    D_0024EA50.ready = 1;
}
