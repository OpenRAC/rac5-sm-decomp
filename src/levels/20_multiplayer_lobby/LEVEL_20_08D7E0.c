/* LEVEL_20:0x08D7E0 -- placement copy of LEVEL_16_0A3100.c: binds the object's two sub-records to its shared table: for each record queries the table with an unlimited count and the entry offset, then loads the indexed 0x40-byte entry; finally refreshes the object, starts its first record and sets the colour word; returns 1. */
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

extern int func_068D70(int *a, unsigned int b, int c, void *d);
extern int func_068DF8(int a, void *d);
extern void func_068178(void *p);
extern void func_067D68(float f, void *a, void *b);

int func_08D7E0(Obj *o)
{
    func_068D70(o->info->tbl, -1, o->info->off + 0x20, o->recB0);
    func_068DF8(*o->info->tbl + o->index * 0x40, o->recB0);
    func_068D70(o->info->tbl, -1, o->info->off + 0x20, o->recD8);
    func_068DF8(*o->info->tbl + o->index * 0x40, o->recD8);
    func_068178(o);
    func_067D68(0.0f, o, o->recB0);
    o->color = 0xFFFFFF;
    return 1;
}
