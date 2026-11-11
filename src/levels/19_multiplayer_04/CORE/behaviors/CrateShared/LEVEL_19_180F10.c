/* LEVEL_19:0x180F10 -- placement copy of LEVEL_01_1CB590.c: copies two vertex-colour tables from the loaded asset and halves their colour words. */

typedef struct {
    char pad_00[0x10];
    unsigned int color;
    int pad_14;
} Ent18;

typedef struct {
    char pad_00[0x10];
    unsigned int color;
} Ent14;

typedef struct {
    char pad_00[0x18];
    Ent18 *tbl1;
    int count1;
    Ent14 *tbl2;
    int count2;
    char loaded;
} Tables;

typedef struct {
    char pad_00[4];
    void *src1;
    int n1;
    void *src2;
    int n2;
} Asset;

extern Tables D_002E5E30;
extern Asset *D_001B5A20;
extern char D_001D94B0[];

extern void *func_0F0A00(int size, int a, char *file, int line);
extern void *memcpy(void *dst, const void *src, unsigned int n);

static __inline__ int Min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

void func_180F10(void)
{
    int i;
    int j;
    int n;

    D_002E5E30.loaded = 1;
    D_002E5E30.count1 = D_001B5A20->n1;
    D_002E5E30.tbl1 = func_0F0A00(D_002E5E30.count1 * 0x18, 0, D_001D94B0, 0x2DE);
    memcpy(D_002E5E30.tbl1, D_001B5A20->src1, D_002E5E30.count1 * 0x18);
    for (i = 0; i != D_002E5E30.count1; i++)
        D_002E5E30.tbl1[i].color = (D_002E5E30.tbl1[i].color & 0xFEFEFE) >> 1;
    D_002E5E30.tbl2 = func_0F0A00(D_001B5A20->n2 * 0x14, 0, D_001D94B0, 0x2E3);
    n = Min(2, D_001B5A20->n2);
    D_002E5E30.count2 = n;
    memcpy(D_002E5E30.tbl2, D_001B5A20->src2, n * 0x14);
    for (j = 0; j != D_002E5E30.count2; j++)
        D_002E5E30.tbl2[j].color = (D_002E5E30.tbl2[j].color & 0xFEFEFE) >> 1;
}
