/* LEVEL_02:0x16AD20 -- sets flag 8 in a record word, calls a helper, then passes the helper result to a second helper. */
extern long long func_16B2F0(void);
extern void func_1698B8(char *, int, long long);
void func_16AD20(char *record)
{
    long long r;
    *(unsigned int *)(record + 100) |= 8;
    r = func_16B2F0();
    func_1698B8(record, (unsigned char)record[0x45], r);
}
