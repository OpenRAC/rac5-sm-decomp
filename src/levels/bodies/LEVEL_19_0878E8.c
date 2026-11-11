/* LEVEL_19:0x0878E8 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_0024E850;
extern const char D_001C67E0[];
extern void func_087830(void);
extern void *func_0F0A00(int size, int a, const char *file, int line);
extern void func_089098(void *p, int n);
extern void func_0890E0(void *p, int n);
extern void func_0876A8(void);

void func_0878E8(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_087830();
    if (D_0024E850.count > 0) {
        D_0024E850.size = D_0024E850.count << 12;
        D_0024E850.slots = func_0F0A00(D_0024E850.count << 4, 0, D_001C67E0, 0x2BD);
        n = D_0024E850.count;
        func_089098(D_0024E850.subC, n);
        func_0890E0(D_0024E850.sub20, n << 3);
        D_0024E850.pages = func_0F0A00(D_0024E850.size, 0, D_001C67E0, 0x2C4);
        p = D_0024E850.pages;
        s = D_0024E850.slots;
        end = s + D_0024E850.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_0876A8();
    }
    D_0024E850.ready = 1;
}
