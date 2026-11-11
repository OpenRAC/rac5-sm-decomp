/* LEVEL_17:0x13B9F8 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_001B0D70[];
extern int D_001B0DB0;
extern void func_0D99D0(int index);
extern int func_106410(unsigned int value);

void func_13B9F8(void)
{
    Ent *e = D_001B0D70;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0D99D0(*p);
    D_001B0DB0 = func_106410(0xF8DC144A);
}
