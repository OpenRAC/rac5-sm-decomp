/* LEVEL_21:0x07A710 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_001B02D0;
extern const char D_00165030[];
extern void func_07A658(void);
extern void *func_0D4FE0(int size, int a, const char *file, int line);
extern void func_07C010(void *p, int n);
extern void func_07C058(void *p, int n);
extern void func_07A4D0(void);

void func_07A710(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_07A658();
    if (D_001B02D0.count > 0) {
        D_001B02D0.size = D_001B02D0.count << 12;
        D_001B02D0.slots = func_0D4FE0(D_001B02D0.count << 4, 0, D_00165030, 0x2BD);
        n = D_001B02D0.count;
        func_07C010(D_001B02D0.subC, n);
        func_07C058(D_001B02D0.sub20, n << 3);
        D_001B02D0.pages = func_0D4FE0(D_001B02D0.size, 0, D_00165030, 0x2C4);
        p = D_001B02D0.pages;
        s = D_001B02D0.slots;
        end = s + D_001B02D0.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_07A4D0();
    }
    D_001B02D0.ready = 1;
}
