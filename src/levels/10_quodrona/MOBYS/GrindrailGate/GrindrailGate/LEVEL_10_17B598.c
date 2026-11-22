/* LEVEL_10:0x17B598 -- placement copy of LEVEL_03_178FE0.c: finds the largest count among the records of a table, allocates a block of twelve-byte entries for it, then runs three setup helpers and caches the lookup result. */
typedef struct Slot {
    char pad_00[0x14];
    int *counter_14;
    char pad_18[0x34 - 0x18];
} Slot;

typedef struct Obj {
    char pad_00[4];
    char *table_04;
    char pad_08[0x3C - 8];
    unsigned char count_3C;
} Obj;

extern char D_002108D0[];
extern int D_002108E4;
extern char D_0022AD98[];
extern int D_0039F368;
extern int func_10D908(int a, int b, int c, char *file, int line);
extern void func_1D6130(void *p);
extern void func_17B568(void);
extern void func_0EF088(int index);
extern int func_127EC8(unsigned int key);

void func_17B598(Obj *o)
{
    int max;
    unsigned int n;
    unsigned int cnt;
    char *rec;
    int *p;
    int *q;

    max = 0;
    cnt = o->count_3C;
    if (cnt != 0) {
        n = cnt;
        rec = o->table_04 + 0x14;
        do {
            p = *(int **)rec;
            if (p != 0) {
                q = (*p < max) ? &max : p;
                max = *q;
            }
            n--;
            rec += 0x34;
        } while (n != 0);
    }
    if (max != 0) {
        int *dst = &D_002108E4;
        *dst = func_10D908(0x10, max * 0xC, 0, D_0022AD98, 0xC2);
    }
    func_1D6130(D_002108D0);
    func_17B568();
    func_0EF088(0x1B);
    D_0039F368 = func_127EC8(0x928266F2);
}
