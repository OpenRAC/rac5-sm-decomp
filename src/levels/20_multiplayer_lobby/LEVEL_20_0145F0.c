/* LEVEL_20:0x0145F0 -- placement copy of LEVEL_16_016638.c: forwards two global words to the record helper with
   fixed default options. */
extern int D_000FD414;
extern int D_000FD424;
extern char D_00135F30[];
extern void func_0656B8(void *record, int a, int b, int enable, int c, int d,
                        unsigned int mask);

void func_0145F0(void)
{
    func_0656B8(D_00135F30, D_000FD414, D_000FD424, 1, 0, 0, 0xFFFFFFFF);
}
