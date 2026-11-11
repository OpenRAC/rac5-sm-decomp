/* LEVEL_16:0x016638 -- forwards two global words to the record helper with
   fixed default options. */
extern int D_0019AD2C;
extern int D_0019AD3C;
extern char D_001DE5B0[];
extern void func_077A48(void *record, int a, int b, int enable, int c, int d,
                        unsigned int mask);

void func_016638(void)
{
    func_077A48(D_001DE5B0, D_0019AD2C, D_0019AD3C, 1, 0, 0, 0xFFFFFFFF);
}
