/* LEVEL_18:0x015D48 -- placement copy of LEVEL_16_016638.c: forwards two global words to the record helper with
   fixed default options. */
extern int D_0019C1AC;
extern int D_0019C1BC;
extern char D_001DE930[];
extern void func_0773C8(void *record, int a, int b, int enable, int c, int d,
                        unsigned int mask);

void func_015D48(void)
{
    func_0773C8(D_001DE930, D_0019C1AC, D_0019C1BC, 1, 0, 0, 0xFFFFFFFF);
}
