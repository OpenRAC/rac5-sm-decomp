/* LEVEL_01:0x096850 -- allocates the slot array and its backing pages. */
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
extern G D_00298290;
extern const char D_002108B0[];
extern void func_096798(void);
extern void *func_10F7A0(int size, int a, const char *file, int line);
extern void func_098078(void *p, int n);
extern void func_0980C0(void *p, int n);
extern void func_096610(void);

void func_096850(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_096798();
    if (D_00298290.count > 0) {
        D_00298290.size = D_00298290.count << 12;
        D_00298290.slots = func_10F7A0(D_00298290.count << 4, 0, D_002108B0, 0x2BD);
        n = D_00298290.count;
        func_098078(D_00298290.subC, n);
        func_0980C0(D_00298290.sub20, n << 3);
        D_00298290.pages = func_10F7A0(D_00298290.size, 0, D_002108B0, 0x2C4);
        p = D_00298290.pages;
        s = D_00298290.slots;
        end = s + D_00298290.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_096610();
    }
    D_00298290.ready = 1;
}
