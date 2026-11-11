/* LEVEL_24:0x14E338 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_001D8428[];
extern int D_001D8468;
extern void func_0E7358(int index);
extern int func_11FB68(unsigned int value);

void func_14E338(void)
{
    Ent *e = D_001D8428;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0E7358(*p);
    D_001D8468 = func_11FB68(0xF8DC144A);
}
