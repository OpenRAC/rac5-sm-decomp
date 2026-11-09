/* LEVEL_17:0x016058 -- placement copy of LEVEL_16_016638.c: forwards two global words to the record helper with
   fixed default options. */
extern int D_0018E32C;
extern int D_0018E33C;
extern char D_001CF8B0[];
extern void func_0784C0(void *record, int a, int b, int enable, int c, int d,
                        unsigned int mask);

void func_016058(void)
{
    func_0784C0(D_001CF8B0, D_0018E32C, D_0018E33C, 1, 0, 0, 0xFFFFFFFF);
}
