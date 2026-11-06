extern char *D_001F5834;
extern char D_001F4030[];
extern void func_024028(void *, int, int);

void func_07AF88(char *record)
{
    D_001F5834 = record;
    func_024028(D_001F4030, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
