/* LEVEL_21:0x02D030 -- placement copy of LEVEL_15_02D030.c: placement copy of LEVEL_01_0378F8.c: searches the global table for a marker key, stores the found flag in a global byte, then runs three helpers on the argument. */
typedef struct { char pad00[0x24]; unsigned int id; char pad28[0x1C]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
extern Tab *D_0015B710;
extern unsigned char D_00149269;
extern void func_0F4EB8(void);
extern void func_042A90(void);
extern void func_048F68(void);

void func_02D030(void *p)
{
    unsigned char *flag = &D_00149269;
    Tab *t;
    Ent *r;
    unsigned int key;
    unsigned int i;
    key = 0x36919224u;
    t = D_0015B710;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == key) {
            r = &t->ents[i];
            goto done;
        }
    }
    r = 0;
done:
    *flag = (r != 0);
    if (D_00149269) {
        ((void (*)(void *))func_0F4EB8)(p);
    }
    ((void (*)(void *))func_042A90)(p);
    ((void (*)(void *))func_048F68)(p);
}
