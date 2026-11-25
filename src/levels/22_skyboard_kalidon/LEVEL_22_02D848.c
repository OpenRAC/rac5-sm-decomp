/* LEVEL_22:0x02D848 -- placement copy of LEVEL_15_02D030.c: placement copy of LEVEL_01_0378F8.c: searches the global table for a marker key, stores the found flag in a global byte, then runs three helpers on the argument. */
typedef struct { char pad00[0x24]; unsigned int id; char pad28[0x1C]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
extern Tab *D_00165D70;
extern unsigned char D_00153969;
extern void func_132300(void *);
extern void func_046FF8(void);
extern void func_04D4D0(void);

void func_02D848(void *p)
{
    unsigned char *flag = &D_00153969;
    Tab *t;
    Ent *r;
    unsigned int key;
    unsigned int i;
    key = 0x36919224u;
    t = D_00165D70;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == key) {
            r = &t->ents[i];
            goto done;
        }
    }
    r = 0;
done:
    *flag = (r != 0);
    if (D_00153969) {
        func_132300(p);
    }
    ((void (*)(void *))func_046FF8)(p);
    ((void (*)(void *))func_04D4D0)(p);
}
