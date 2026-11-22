/* USA LEVEL_16.REL:0x0A3100, 224-byte candidate (21 November 2026).
 * Measured pinned: 7 differing words; first difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char *base;
} Tbl;

typedef struct {
    char pad0[4];
    int off;
    Tbl *tbl;
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

extern void func_07B100(Tbl *tbl, unsigned int count, int off, char *rec);
extern void func_07B188(char *entry, char *rec);
extern void func_07A508(Obj *o);
extern void func_07A0F8(Obj *o, char *rec, float f);

int func_0A3100(Obj *o)
{
    char *rec = o->recB0;
    char *rec2 = o->recD8;

    func_07B100(o->info->tbl, 0xFFFFFFFF, o->info->off + 0x20, rec);
    func_07B188(o->info->tbl->base + o->index * 0x40, rec);
    func_07B100(o->info->tbl, 0xFFFFFFFF, o->info->off + 0x20, rec2);
    func_07B188(o->info->tbl->base + o->index * 0x40, rec2);
    func_07A508(o);
    func_07A0F8(o, rec, 0.0f);
    o->color = 0xFFFFFF;
    return 1;
}
