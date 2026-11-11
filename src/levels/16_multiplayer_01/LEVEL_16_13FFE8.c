/* LEVEL_16:0x13FFE8 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_001BD7A8[];
extern int D_001BD7E8;
extern void func_0DAAA8(int index);
extern int func_106E98(unsigned int value);

void func_13FFE8(void)
{
    Ent *e = D_001BD7A8;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0DAAA8(*p);
    D_001BD7E8 = func_106E98(0xF8DC144A);
}
