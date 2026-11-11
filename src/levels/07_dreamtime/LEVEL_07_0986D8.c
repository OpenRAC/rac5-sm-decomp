/* LEVEL_07:0x0986D8 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_002ADB90;
extern const char D_002255B0[];
extern void func_098620(void);
extern void *func_1127F0(int size, int a, const char *file, int line);
extern void func_09A058(void *p, int n);
extern void func_09A0A0(void *p, int n);
extern void func_098498(void);

void func_0986D8(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_098620();
    if (D_002ADB90.count > 0) {
        D_002ADB90.size = D_002ADB90.count << 12;
        D_002ADB90.slots = func_1127F0(D_002ADB90.count << 4, 0, D_002255B0, 0x2BD);
        n = D_002ADB90.count;
        func_09A058(D_002ADB90.subC, n);
        func_09A0A0(D_002ADB90.sub20, n << 3);
        D_002ADB90.pages = func_1127F0(D_002ADB90.size, 0, D_002255B0, 0x2C4);
        p = D_002ADB90.pages;
        s = D_002ADB90.slots;
        end = s + D_002ADB90.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_098498();
    }
    D_002ADB90.ready = 1;
}
