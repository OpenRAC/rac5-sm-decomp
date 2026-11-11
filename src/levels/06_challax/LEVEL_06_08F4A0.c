/* LEVEL_06:0x08F4A0 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_00285010;
extern const char D_001FF730[];
extern void func_08F3E8(void);
extern void *func_105D70(int size, int a, const char *file, int line);
extern void func_090D88(void *p, int n);
extern void func_090DD0(void *p, int n);
extern void func_08F260(void);

void func_08F4A0(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_08F3E8();
    if (D_00285010.count > 0) {
        D_00285010.size = D_00285010.count << 12;
        D_00285010.slots = func_105D70(D_00285010.count << 4, 0, D_001FF730, 0x2BD);
        n = D_00285010.count;
        func_090D88(D_00285010.subC, n);
        func_090DD0(D_00285010.sub20, n << 3);
        D_00285010.pages = func_105D70(D_00285010.size, 0, D_001FF730, 0x2C4);
        p = D_00285010.pages;
        s = D_00285010.slots;
        end = s + D_00285010.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_08F260();
    }
    D_00285010.ready = 1;
}
