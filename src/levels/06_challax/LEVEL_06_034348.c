/* LEVEL_06:0x034348 -- placement copy of LEVEL_15_02D030.c: placement copy of LEVEL_01_0378F8.c: searches the global table for a marker key, stores the found flag in a global byte, then runs three helpers on the argument. */
typedef struct { char pad00[0x24]; unsigned int id; char pad28[0x1C]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
extern Tab *D_001F5990;
extern unsigned char D_001E34E9;
extern void func_1937C8(void *);
extern void func_04E0B0(void);
extern void func_054588(void);

void func_034348(void *p)
{
    unsigned char *flag = &D_001E34E9;
    Tab *t;
    Ent *r;
    unsigned int key;
    unsigned int i;
    key = 0x36919224u;
    t = D_001F5990;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == key) {
            r = &t->ents[i];
            goto done;
        }
    }
    r = 0;
done:
    *flag = (r != 0);
    if (D_001E34E9) {
        func_1937C8(p);
    }
    ((void (*)(void *))func_04E0B0)(p);
    ((void (*)(void *))func_054588)(p);
}
