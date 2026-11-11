/* LEVEL_06:0x152F20 -- placement copy of LEVEL_01_162810.c: runs the helper on the four slot ids of the table and stores the hash lookup. */
typedef struct Ent {
    char pad_00[0xC];
    int id;
} Ent;

extern Ent D_001F60C0[];
extern int D_001F6100;
extern void func_0E8808(int index);
extern int func_1206C0(unsigned int value);

void func_152F20(void)
{
    Ent *e = D_001F60C0;
    int *p = &e->id;
    unsigned int i;

    for (i = 0; i < 4; i++, p += 4)
        func_0E8808(*p);
    D_001F6100 = func_1206C0(0xF8DC144A);
}
