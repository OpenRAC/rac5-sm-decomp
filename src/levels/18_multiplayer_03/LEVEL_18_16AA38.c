extern void func_167F68(int, void *, void *);
extern void func_16AB68(void *);

void func_16AA38(char *record)
{
    func_167F68(**(int **)(record + 0x54), record + 0x30, record);
    func_16AB68(record);
}
