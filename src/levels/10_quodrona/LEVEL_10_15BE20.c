/* LEVEL_10:0x15BE20 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_00210140[];
extern int D_00210180;
extern void func_0EF088(int index);
extern int func_127EC8(unsigned int value);

void func_15BE20(void)
{
    Ent *e = D_00210140;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0EF088(*p);
    D_00210180 = func_127EC8(0xF8DC144A);
}
