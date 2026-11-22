/* LEVEL_07:0x185FD0 -- placement copy of LEVEL_03_178FE0.c: finds the largest count among the records of a table, allocates a block of twelve-byte entries for it, then runs three setup helpers and caches the lookup result. */
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

extern char D_0021C288[];
extern int D_0021C29C;
extern char D_002374B8[];
extern int D_003AB880;
extern int func_112740(int a, int b, int c, char *file, int line);
extern void func_1DECD8(void *p);
extern void func_185FA0(void);
extern void func_0F0548(int index);
extern int func_12D068(unsigned int key);

void func_185FD0(Obj *o)
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
        int *dst = &D_0021C29C;
        *dst = func_112740(0x10, max * 0xC, 0, D_002374B8, 0xC2);
    }
    func_1DECD8(D_0021C288);
    func_185FA0();
    func_0F0548(0x1B);
    D_003AB880 = func_12D068(0x928266F2);
}
