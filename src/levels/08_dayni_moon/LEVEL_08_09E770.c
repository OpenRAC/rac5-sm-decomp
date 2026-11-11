/* LEVEL_08:0x09E770 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_002E7510;
extern const char D_0025A530[];
extern void func_09E6B8(void);
extern void *func_11FF40(int size, int a, const char *file, int line);
extern void func_0A0118(void *p, int n);
extern void func_0A0160(void *p, int n);
extern void func_09E530(void);

void func_09E770(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_09E6B8();
    if (D_002E7510.count > 0) {
        D_002E7510.size = D_002E7510.count << 12;
        D_002E7510.slots = func_11FF40(D_002E7510.count << 4, 0, D_0025A530, 0x2BD);
        n = D_002E7510.count;
        func_0A0118(D_002E7510.subC, n);
        func_0A0160(D_002E7510.sub20, n << 3);
        D_002E7510.pages = func_11FF40(D_002E7510.size, 0, D_0025A530, 0x2C4);
        p = D_002E7510.pages;
        s = D_002E7510.slots;
        end = s + D_002E7510.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_09E530();
    }
    D_002E7510.ready = 1;
}
