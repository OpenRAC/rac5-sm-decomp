/* LEVEL_09:0x154DE8 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_001F0FB8[];
extern int D_001F0FF8;
extern void func_0EB628(int index);
extern int func_123000(unsigned int value);

void func_154DE8(void)
{
    Ent *e = D_001F0FB8;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0EB628(*p);
    D_001F0FF8 = func_123000(0xF8DC144A);
}
