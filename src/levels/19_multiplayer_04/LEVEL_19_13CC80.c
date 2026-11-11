/* LEVEL_19:0x13CC80 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_001BE8F0[];
extern int D_001BE930;
extern void func_0D9168(int index);
extern int func_107538(unsigned int value);

void func_13CC80(void)
{
    Ent *e = D_001BE8F0;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0D9168(*p);
    D_001BE930 = func_107538(0xF8DC144A);
}
