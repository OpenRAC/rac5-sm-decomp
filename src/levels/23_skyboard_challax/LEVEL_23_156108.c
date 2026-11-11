/* LEVEL_23:0x156108 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_001DAC40[];
extern int D_001DAC80;
extern void func_0E2630(int index);
extern int func_11AEE0(unsigned int value);

void func_156108(void)
{
    Ent *e = D_001DAC40;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0E2630(*p);
    D_001DAC80 = func_11AEE0(0xF8DC144A);
}
