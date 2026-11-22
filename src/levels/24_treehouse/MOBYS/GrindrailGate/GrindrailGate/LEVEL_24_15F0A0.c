/* LEVEL_24:0x15F0A0 -- placement copy of LEVEL_03_178FE0.c: finds the largest count among the records of a table, allocates a block of twelve-byte entries for it, then runs three setup helpers and caches the lookup result. */
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

extern char D_001D8B58[];
extern int D_001D8B6C;
extern char D_001F04C0[];
extern int D_0035FF50;
extern int func_1066F0(int a, int b, int c, char *file, int line);
extern void func_1A2288(void *p);
extern void func_15F070(void);
extern void func_0E7358(int index);
extern int func_11FB68(unsigned int key);

void func_15F0A0(Obj *o)
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
        int *dst = &D_001D8B6C;
        *dst = func_1066F0(0x10, max * 0xC, 0, D_001F04C0, 0xC2);
    }
    func_1A2288(D_001D8B58);
    func_15F070();
    func_0E7358(0x1B);
    D_0035FF50 = func_11FB68(0x928266F2);
}
