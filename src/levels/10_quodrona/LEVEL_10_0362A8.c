/* LEVEL_10:0x0362A8 -- placement copy of LEVEL_15_02D030.c: placement copy of LEVEL_01_0378F8.c: searches the global table for a marker key, stores the found flag in a global byte, then runs three helpers on the argument. */
typedef struct { char pad00[0x24]; unsigned int id; char pad28[0x1C]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
extern Tab *D_0020F9F0;
extern unsigned char D_001FD5E9;
extern void func_1A7CF8(void *);
extern void func_0500B8(void);
extern void func_056590(void);

void func_0362A8(void *p)
{
    unsigned char *flag = &D_001FD5E9;
    Tab *t;
    Ent *r;
    unsigned int key;
    unsigned int i;
    key = 0x36919224u;
    t = D_0020F9F0;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == key) {
            r = &t->ents[i];
            goto done;
        }
    }
    r = 0;
done:
    *flag = (r != 0);
    if (D_001FD5E9) {
        func_1A7CF8(p);
    }
    ((void (*)(void *))func_0500B8)(p);
    ((void (*)(void *))func_056590)(p);
}
