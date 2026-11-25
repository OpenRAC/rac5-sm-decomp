/* LEVEL_24:0x0309F0 -- placement copy of LEVEL_15_02D030.c: placement copy of LEVEL_01_0378F8.c: searches the global table for a marker key, stores the found flag in a global byte, then runs three helpers on the argument. */
typedef struct { char pad00[0x24]; unsigned int id; char pad28[0x1C]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
extern Tab *D_001D7A10;
extern unsigned char D_001C5269;
extern void func_17C290(void *);
extern void func_04A940(void);
extern void func_050E18(void);

void func_0309F0(void *p)
{
    unsigned char *flag = &D_001C5269;
    Tab *t;
    Ent *r;
    unsigned int key;
    unsigned int i;
    key = 0x36919224u;
    t = D_001D7A10;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == key) {
            r = &t->ents[i];
            goto done;
        }
    }
    r = 0;
done:
    *flag = (r != 0);
    if (D_001C5269) {
        func_17C290(p);
    }
    ((void (*)(void *))func_04A940)(p);
    ((void (*)(void *))func_050E18)(p);
}
