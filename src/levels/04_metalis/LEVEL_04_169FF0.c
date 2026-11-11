/* LEVEL_04:0x169FF0 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_00220C30[];
extern int D_00220C70;
extern void func_0F6C80(int index);
extern int func_1364E8(unsigned int value);

void func_169FF0(void)
{
    Ent *e = D_00220C30;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0F6C80(*p);
    D_00220C70 = func_1364E8(0xF8DC144A);
}
