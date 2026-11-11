/* LEVEL_02:0x09CF20 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_002AF790;
extern const char D_00225830[];
extern void func_09CE68(void);
extern void *func_115AE8(int size, int a, const char *file, int line);
extern void func_09E748(void *p, int n);
extern void func_09E790(void *p, int n);
extern void func_09CCE0(void);

void func_09CF20(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_09CE68();
    if (D_002AF790.count > 0) {
        D_002AF790.size = D_002AF790.count << 12;
        D_002AF790.slots = func_115AE8(D_002AF790.count << 4, 0, D_00225830, 0x2BD);
        n = D_002AF790.count;
        func_09E748(D_002AF790.subC, n);
        func_09E790(D_002AF790.sub20, n << 3);
        D_002AF790.pages = func_115AE8(D_002AF790.size, 0, D_00225830, 0x2C4);
        p = D_002AF790.pages;
        s = D_002AF790.slots;
        end = s + D_002AF790.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_09CCE0();
    }
    D_002AF790.ready = 1;
}
