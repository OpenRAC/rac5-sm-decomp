extern char D_000EF038[];
extern void func_09FBA8(void *, void *, int, int);

void func_0EF780(char *record)
{
    func_09FBA8(D_000EF038, record, *(int *)(record + 0x1c), 0);
}
