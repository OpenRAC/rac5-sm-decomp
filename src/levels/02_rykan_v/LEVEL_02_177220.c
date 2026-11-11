/* LEVEL_02:0x177220 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_0021C640[];
extern int D_0021C680;
extern void func_0F58F8(int index);
extern int func_130418(unsigned int value);

void func_177220(void)
{
    Ent *e = D_0021C640;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0F58F8(*p);
    D_0021C680 = func_130418(0xF8DC144A);
}
