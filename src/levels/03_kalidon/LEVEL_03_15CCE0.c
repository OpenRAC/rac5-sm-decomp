/* LEVEL_03:0x15CCE0 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_0021FB88[];
extern int D_0021FBC8;
extern void func_0EDFE0(int index);
extern int func_1282D0(unsigned int value);

void func_15CCE0(void)
{
    Ent *e = D_0021FB88;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0EDFE0(*p);
    D_0021FBC8 = func_1282D0(0xF8DC144A);
}
