/* LEVEL_08:0x1965B8 -- placement copy of LEVEL_03_178FE0.c: finds the largest count among the records of a table, allocates a block of twelve-byte entries for it, then runs three setup helpers and caches the lookup result. */
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

extern char D_00250FC0[];
extern int D_00250FD4;
extern char D_0026D298[];
extern int D_003E6CF0;
extern int func_11FE90(int a, int b, int c, char *file, int line);
extern void func_211878(void *p);
extern void func_196588(void);
extern void func_0FB190(int index);
extern int func_13B5A0(unsigned int key);

void func_1965B8(Obj *o)
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
        int *dst = &D_00250FD4;
        *dst = func_11FE90(0x10, max * 0xC, 0, D_0026D298, 0xC2);
    }
    func_211878(D_00250FC0);
    func_196588();
    func_0FB190(0x1B);
    D_003E6CF0 = func_13B5A0(0x928266F2);
}
