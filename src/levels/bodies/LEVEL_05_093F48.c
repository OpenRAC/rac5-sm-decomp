/* LEVEL_05:0x093F48 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_00284150;
extern const char D_001FF7B0[];
extern void func_093E90(void);
extern void *func_10BBE0(int size, int a, const char *file, int line);
extern void func_0956D8(void *p, int n);
extern void func_095720(void *p, int n);
extern void func_093D08(void);

void func_093F48(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_093E90();
    if (D_00284150.count > 0) {
        D_00284150.size = D_00284150.count << 12;
        D_00284150.slots = func_10BBE0(D_00284150.count << 4, 0, D_001FF7B0, 0x2BD);
        n = D_00284150.count;
        func_0956D8(D_00284150.subC, n);
        func_095720(D_00284150.sub20, n << 3);
        D_00284150.pages = func_10BBE0(D_00284150.size, 0, D_001FF7B0, 0x2C4);
        p = D_00284150.pages;
        s = D_00284150.slots;
        end = s + D_00284150.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_093D08();
    }
    D_00284150.ready = 1;
}
