/* LEVEL_17:0x0A25E0 -- placement copy of LEVEL_16_0A3100.c: binds the object's two sub-records to its shared table: for each record queries the table with an unlimited count and the entry offset, then loads the indexed 0x40-byte entry; finally refreshes the object, starts its first record and sets the colour word; returns 1. */
typedef struct {
    int w0;
    int off;
    int *tbl;
} Info;

typedef struct {
    char pad00[0x9C];
    int index;
    unsigned int color;
    char pad_a4[0xAC - 0xA4];
    Info *info;
    char recB0[0x28];
    char recD8[0x28];
} Obj;

extern int func_07BB78(int *a, unsigned int b, int c, void *d);
extern int func_07BC00(int a, void *d);
extern void func_07AF80(void *p);
extern void func_07AB70(float f, void *a, void *b);

int func_0A25E0(Obj *o)
{
    func_07BB78(o->info->tbl, -1, o->info->off + 0x20, o->recB0);
    func_07BC00(*o->info->tbl + o->index * 0x40, o->recB0);
    func_07BB78(o->info->tbl, -1, o->info->off + 0x20, o->recD8);
    func_07BC00(*o->info->tbl + o->index * 0x40, o->recD8);
    func_07AF80(o);
    func_07AB70(0.0f, o, o->recB0);
    o->color = 0xFFFFFF;
    return 1;
}
