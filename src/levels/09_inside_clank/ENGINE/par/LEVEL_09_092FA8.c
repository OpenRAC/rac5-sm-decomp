/* LEVEL_09:0x092FA8 -- placement copy of LEVEL_01_096850.c: allocates the slot array and its backing pages. */
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
extern G D_0027FA10;
extern const char D_001FA4B0[];
extern void func_092EF0(void);
extern void *func_108B90(int size, int a, const char *file, int line);
extern void func_094928(void *p, int n);
extern void func_094970(void *p, int n);
extern void func_092D68(void);

void func_092FA8(void)
{
    Slot *s;
    Slot *end;
    char *p;
    int n;

    func_092EF0();
    if (D_0027FA10.count > 0) {
        D_0027FA10.size = D_0027FA10.count << 12;
        D_0027FA10.slots = func_108B90(D_0027FA10.count << 4, 0, D_001FA4B0, 0x2BD);
        n = D_0027FA10.count;
        func_094928(D_0027FA10.subC, n);
        func_094970(D_0027FA10.sub20, n << 3);
        D_0027FA10.pages = func_108B90(D_0027FA10.size, 0, D_001FA4B0, 0x2C4);
        p = D_0027FA10.pages;
        s = D_0027FA10.slots;
        end = s + D_0027FA10.count;
        for (; s != end; s++) {
            s->page = p;
            p += 0x1000;
        }
        func_092D68();
    }
    D_0027FA10.ready = 1;
}
