/* LEVEL_23:0x08C270 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_002696D0;
extern const char D_001E3A30[];
extern void func_08C1B8(void);
extern void *func_101FC8(int size, int a, const char *file, int line);
extern void func_08DA00(void *p, int n);
extern void func_08DA48(void *p, int n);
extern void func_08C030(void);

void func_08C270(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_08C1B8();
    if (D_002696D0.count > 0) {
        D_002696D0.size = D_002696D0.count << 12;
        D_002696D0.slots = func_101FC8(D_002696D0.count << 4, 0, D_001E3A30, 0x2BD);
        n = D_002696D0.count;
        func_08DA00(D_002696D0.subC, n);
        func_08DA48(D_002696D0.sub20, n << 3);
        D_002696D0.pages = func_101FC8(D_002696D0.size, 0, D_001E3A30, 0x2C4);
        p = D_002696D0.pages;
        s = D_002696D0.slots;
        end = s + D_002696D0.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_08C030();
    }
    D_002696D0.ready = 1;
}
