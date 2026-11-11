/* LEVEL_08:0x174748 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_00250718[];
extern int D_00250758;
extern void func_0FB190(int index);
extern int func_13B5A0(unsigned int value);

void func_174748(void)
{
    Ent *e = D_00250718;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0FB190(*p);
    D_00250758 = func_13B5A0(0xF8DC144A);
}
