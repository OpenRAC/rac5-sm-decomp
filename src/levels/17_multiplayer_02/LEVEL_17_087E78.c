/* LEVEL_17:0x087E78 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_0023F9D0;
extern const char D_001B8A60[];
extern void func_087DC0(void);
extern void *func_0EF9C8(int size, int a, const char *file, int line);
extern void func_089628(void *p, int n);
extern void func_089670(void *p, int n);
extern void func_087C38(void);

void func_087E78(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_087DC0();
    if (D_0023F9D0.count > 0) {
        D_0023F9D0.size = D_0023F9D0.count << 12;
        D_0023F9D0.slots = func_0EF9C8(D_0023F9D0.count << 4, 0, D_001B8A60, 0x2BD);
        n = D_0023F9D0.count;
        func_089628(D_0023F9D0.subC, n);
        func_089670(D_0023F9D0.sub20, n << 3);
        D_0023F9D0.pages = func_0EF9C8(D_0023F9D0.size, 0, D_001B8A60, 0x2C4);
        p = D_0023F9D0.pages;
        s = D_0023F9D0.slots;
        end = s + D_0023F9D0.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_087C38();
    }
    D_0023F9D0.ready = 1;
}
