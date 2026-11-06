extern char D_001D66B8[];
extern void func_15DD20(void *, void *);
extern void func_06F940(void *, int);

void func_167390(char *record)
{
    func_15DD20(record + 0x30, D_001D66B8);
    func_06F940(record, 1);
}
