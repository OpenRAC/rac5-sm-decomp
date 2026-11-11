/* LEVEL_01:0x162810 -- runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_002074F8[];
extern int D_00207538;
extern void func_0EF748(int index);
extern int func_12A068(unsigned int value);

void func_162810(void)
{
    Ent *e = D_002074F8;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0EF748(*p);
    D_00207538 = func_12A068(0xF8DC144A);
}
