/* LEVEL_02:0x1D72A0 -- placement copy of LEVEL_01_1B4DB0.c: finds the table entry with a fixed key and publishes its base and its scaled index into two globals. */
typedef struct { char pad00[0x0C]; int w0C; char pad10[0x14]; unsigned int id; char pad28[8]; int w30; char pad34[0x10]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
extern Tab *D_0021BD50;
extern int D_0021DE94[1];
extern int D_0021DE98;
extern void func_1F16A8(void);

void func_1D72A0(void)
{
    Tab *t;
    Ent *r;
    unsigned int key;
    unsigned int i;

    func_1F16A8();
    key = 0xF3AEA8BDu;
    t = D_0021BD50;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == key) {
            r = &t->ents[i];
            goto done;
        }
    }
    r = 0;
done:
    {
        int base = r->w0C;

        D_0021DE94[0] = base;
        D_0021DE98 = base + (r->w30 << 7);
    }
}
