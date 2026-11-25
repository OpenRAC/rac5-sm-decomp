/* LEVEL_02:0x03C340 -- placement copy of LEVEL_15_02D030.c: placement copy of LEVEL_01_0378F8.c: searches the global table for a marker key, stores the found flag in a global byte, then runs three helpers on the argument. */
typedef struct { char pad00[0x24]; unsigned int id; char pad28[0x1C]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
extern Tab *D_0021BD50;
extern unsigned char D_002095A9;
extern void func_1B85B8(void *);
extern void func_056728(void);
extern void func_05CC00(void);

void func_03C340(void *p)
{
    unsigned char *flag = &D_002095A9;
    Tab *t;
    Ent *r;
    unsigned int key;
    unsigned int i;
    key = 0x36919224u;
    t = D_0021BD50;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == key) {
            r = &t->ents[i];
            goto done;
        }
    }
    r = 0;
done:
    *flag = (r != 0);
    if (D_002095A9) {
        func_1B85B8(p);
    }
    ((void (*)(void *))func_056728)(p);
    ((void (*)(void *))func_05CC00)(p);
}
