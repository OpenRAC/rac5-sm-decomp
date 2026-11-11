/* LEVEL_20:0x074C70 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_00171F10;
extern const char D_00126660[];
extern void func_074BB8(void);
extern void *func_0CA598(int size, int a, const char *file, int line);
extern void func_076388(void *p, int n);
extern void func_0763D0(void *p, int n);
extern void func_074A30(void);

void func_074C70(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_074BB8();
    if (D_00171F10.count > 0) {
        D_00171F10.size = D_00171F10.count << 12;
        D_00171F10.slots = func_0CA598(D_00171F10.count << 4, 0, D_00126660, 0x2BD);
        n = D_00171F10.count;
        func_076388(D_00171F10.subC, n);
        func_0763D0(D_00171F10.sub20, n << 3);
        D_00171F10.pages = func_0CA598(D_00171F10.size, 0, D_00126660, 0x2C4);
        p = D_00171F10.pages;
        s = D_00171F10.slots;
        end = s + D_00171F10.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_074A30();
    }
    D_00171F10.ready = 1;
}
