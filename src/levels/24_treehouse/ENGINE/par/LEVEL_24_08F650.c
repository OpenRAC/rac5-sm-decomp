/* LEVEL_24:0x08F650 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_00264150;
extern const char D_001E1630[];
extern void func_08F598(void);
extern void *func_1067A0(int size, int a, const char *file, int line);
extern void func_090FD0(void *p, int n);
extern void func_091018(void *p, int n);
extern void func_08F410(void);

void func_08F650(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_08F598();
    if (D_00264150.count > 0) {
        D_00264150.size = D_00264150.count << 12;
        D_00264150.slots = func_1067A0(D_00264150.count << 4, 0, D_001E1630, 0x2BD);
        n = D_00264150.count;
        func_090FD0(D_00264150.subC, n);
        func_091018(D_00264150.sub20, n << 3);
        D_00264150.pages = func_1067A0(D_00264150.size, 0, D_001E1630, 0x2C4);
        p = D_00264150.pages;
        s = D_00264150.slots;
        end = s + D_00264150.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_08F410();
    }
    D_00264150.ready = 1;
}
