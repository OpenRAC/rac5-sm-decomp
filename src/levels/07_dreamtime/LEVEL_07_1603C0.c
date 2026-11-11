/* LEVEL_07:0x1603C0 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_0021B7E0[];
extern int D_0021B820;
extern void func_0F0548(int index);
extern int func_12D068(unsigned int value);

void func_1603C0(void)
{
    Ent *e = D_0021B7E0;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0F0548(*p);
    D_0021B820 = func_12D068(0xF8DC144A);
}
