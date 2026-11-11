/* LEVEL_02:0x038838 -- asks the engine to fill the level record, then, if the
   level pointer is not null, writes 0.5 into two of its float fields. */
extern char D_00222B58[];
extern char D_0024A5E0[];

void func_1303B8(void *a, void *b, int c);

void func_038838(void *p)
{
    void *v0;
    func_1303B8(D_0024A5E0, D_00222B58, 4);
    v0 = *(void **)((char *)D_0024A5E0 + 8);
    if (v0 != 0) {
        *(float *)((char *)v0 + 0x14) = 0.5f;
        *(float *)((char *)v0 + 0x20) = 0.5f;
    }
}
