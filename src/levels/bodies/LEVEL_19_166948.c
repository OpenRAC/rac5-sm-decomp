extern void func_163E78(int, void *, void *);
extern void func_166A78(void *);

void func_166948(char *record)
{
    func_163E78(**(int **)(record + 0x54), record + 0x30, record);
    func_166A78(record);
}
