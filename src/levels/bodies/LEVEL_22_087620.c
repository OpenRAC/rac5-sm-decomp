/* LEVEL_22:0x087620 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_001EDE50;
extern const char D_0016DD30[];
extern void func_087568(void);
extern void *func_0EB508(int size, int a, const char *file, int line);
extern void func_088D38(void *p, int n);
extern void func_088D80(void *p, int n);
extern void func_0873E0(void);

void func_087620(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_087568();
    if (D_001EDE50.count > 0) {
        D_001EDE50.size = D_001EDE50.count << 12;
        D_001EDE50.slots = func_0EB508(D_001EDE50.count << 4, 0, D_0016DD30, 0x2BD);
        n = D_001EDE50.count;
        func_088D38(D_001EDE50.subC, n);
        func_088D80(D_001EDE50.sub20, n << 3);
        D_001EDE50.pages = func_0EB508(D_001EDE50.size, 0, D_0016DD30, 0x2C4);
        p = D_001EDE50.pages;
        s = D_001EDE50.slots;
        end = s + D_001EDE50.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_0873E0();
    }
    D_001EDE50.ready = 1;
}
