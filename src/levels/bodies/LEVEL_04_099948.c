/* LEVEL_04:0x099948 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_002B2A90;
extern const char D_0022A230[];
extern void func_099890(void);
extern void *func_11AD08(int size, int a, const char *file, int line);
extern void func_09B180(void *p, int n);
extern void func_09B1C8(void *p, int n);
extern void func_099708(void);

void func_099948(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_099890();
    if (D_002B2A90.count > 0) {
        D_002B2A90.size = D_002B2A90.count << 12;
        D_002B2A90.slots = func_11AD08(D_002B2A90.count << 4, 0, D_0022A230, 0x2BD);
        n = D_002B2A90.count;
        func_09B180(D_002B2A90.subC, n);
        func_09B1C8(D_002B2A90.sub20, n << 3);
        D_002B2A90.pages = func_11AD08(D_002B2A90.size, 0, D_0022A230, 0x2C4);
        p = D_002B2A90.pages;
        s = D_002B2A90.slots;
        end = s + D_002B2A90.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_099708();
    }
    D_002B2A90.ready = 1;
}
