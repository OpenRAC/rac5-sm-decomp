/* LEVEL_09:0x16CBA0 -- placement copy of LEVEL_03_178FE0.c: finds the largest count among the records of a table, allocates a block of twelve-byte entries for it, then runs three setup helpers and caches the lookup result. */
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

extern char D_001F1768[];
extern int D_001F177C;
extern char D_0020A838[];
extern int D_0037D5E0;
extern int func_108AE0(int a, int b, int c, char *file, int line);
extern void func_1B8C88(void *p);
extern void func_16CB70(void);
extern void func_0EB628(int index);
extern int func_123000(unsigned int key);

void func_16CBA0(Obj *o)
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
        int *dst = &D_001F177C;
        *dst = func_108AE0(0x10, max * 0xC, 0, D_0020A838, 0xC2);
    }
    func_1B8C88(D_001F1768);
    func_16CB70();
    func_0EB628(0x1B);
    D_0037D5E0 = func_123000(0x928266F2);
}
