/* LEVEL_05:0x157010 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_001F6530[];
extern int D_001F6570;
extern void func_0EB888(int index);
extern int func_1259E0(unsigned int value);

void func_157010(void)
{
    Ent *e = D_001F6530;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0EB888(*p);
    D_001F6570 = func_1259E0(0xF8DC144A);
}
