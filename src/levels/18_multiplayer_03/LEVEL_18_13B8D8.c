/* LEVEL_18:0x13B8D8 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_001BEC00[];
extern int D_001BEC40;
extern void func_0D8868(int index);
extern int func_105B48(unsigned int value);

void func_13B8D8(void)
{
    Ent *e = D_001BEC00;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0D8868(*p);
    D_001BEC40 = func_105B48(0xF8DC144A);
}
