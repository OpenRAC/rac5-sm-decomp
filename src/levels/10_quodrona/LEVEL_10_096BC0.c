/* LEVEL_10:0x096BC0 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_002A1690;
extern const char D_00219830[];
extern void func_096B08(void);
extern void *func_10D9B8(int size, int a, const char *file, int line);
extern void func_098540(void *p, int n);
extern void func_098588(void *p, int n);
extern void func_096980(void);

void func_096BC0(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_096B08();
    if (D_002A1690.count > 0) {
        D_002A1690.size = D_002A1690.count << 12;
        D_002A1690.slots = func_10D9B8(D_002A1690.count << 4, 0, D_00219830, 0x2BD);
        n = D_002A1690.count;
        func_098540(D_002A1690.subC, n);
        func_098588(D_002A1690.sub20, n << 3);
        D_002A1690.pages = func_10D9B8(D_002A1690.size, 0, D_00219830, 0x2C4);
        p = D_002A1690.pages;
        s = D_002A1690.slots;
        end = s + D_002A1690.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_096980();
    }
    D_002A1690.ready = 1;
}
