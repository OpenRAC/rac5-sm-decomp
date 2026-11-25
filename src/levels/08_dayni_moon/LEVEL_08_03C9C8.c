/* LEVEL_08:0x03C9C8 -- placement copy of LEVEL_15_02D030.c: placement copy of LEVEL_01_0378F8.c: searches the global table for a marker key, stores the found flag in a global byte, then runs three helpers on the argument. */
typedef struct { char pad00[0x24]; unsigned int id; char pad28[0x1C]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
extern Tab *D_0024FC50;
extern unsigned char D_0023D4A9;
extern void func_1D02A8(void *);
extern void func_056B18(void);
extern void func_05CFF0(void);

void func_03C9C8(void *p)
{
    unsigned char *flag = &D_0023D4A9;
    Tab *t;
    Ent *r;
    unsigned int key;
    unsigned int i;
    key = 0x36919224u;
    t = D_0024FC50;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == key) {
            r = &t->ents[i];
            goto done;
        }
    }
    r = 0;
done:
    *flag = (r != 0);
    if (D_0023D4A9) {
        func_1D02A8(p);
    }
    ((void (*)(void *))func_056B18)(p);
    ((void (*)(void *))func_05CFF0)(p);
}
