/* LEVEL_03:0x096480 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_002B3110;
extern const char D_002297B0[];
extern void func_0963C8(void);
extern void *func_10D468(int size, int a, const char *file, int line);
extern void func_097E00(void *p, int n);
extern void func_097E48(void *p, int n);
extern void func_096240(void);

void func_096480(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_0963C8();
    if (D_002B3110.count > 0) {
        D_002B3110.size = D_002B3110.count << 12;
        D_002B3110.slots = func_10D468(D_002B3110.count << 4, 0, D_002297B0, 0x2BD);
        n = D_002B3110.count;
        func_097E00(D_002B3110.subC, n);
        func_097E48(D_002B3110.sub20, n << 3);
        D_002B3110.pages = func_10D468(D_002B3110.size, 0, D_002297B0, 0x2C4);
        p = D_002B3110.pages;
        s = D_002B3110.slots;
        end = s + D_002B3110.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_096240();
    }
    D_002B3110.ready = 1;
}
