/* LEVEL_19:0x0163F8 -- placement copy of LEVEL_16_016638.c: forwards two global words to the record helper with
   fixed default options. */
extern int D_0019BEAC;
extern int D_0019BEBC;
extern char D_001DE730[];
extern void func_077F30(void *record, int a, int b, int enable, int c, int d,
                        unsigned int mask);

void func_0163F8(void)
{
    func_077F30(D_001DE730, D_0019BEAC, D_0019BEBC, 1, 0, 0, 0xFFFFFFFF);
}
