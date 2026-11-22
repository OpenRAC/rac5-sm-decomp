/* LEVEL_03:0x178FE0 -- finds the largest count among the records of a table, allocates a block of twelve-byte entries for it, then runs three setup helpers and caches the lookup result. */
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

extern char D_00220330[];
extern int D_00220344;
extern char D_0023B228[];
extern int D_003B0DB0;
extern int func_10D3B8(int a, int b, int c, char *file, int line);
extern void func_1E2520(void *p);
extern void func_178FB0(void);
extern void func_0EDFE0(int index);
extern int func_1282D0(unsigned int key);

void func_178FE0(Obj *o)
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
        int *dst = &D_00220344;
        *dst = func_10D3B8(0x10, max * 0xC, 0, D_0023B228, 0xC2);
    }
    func_1E2520(D_00220330);
    func_178FB0();
    func_0EDFE0(0x1B);
    D_003B0DB0 = func_1282D0(0x928266F2);
}
