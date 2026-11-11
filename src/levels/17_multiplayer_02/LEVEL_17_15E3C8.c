extern void func_15B8F8(int, void *, void *);
extern void func_15E4F8(void *);

void func_15E3C8(char *record)
{
    func_15B8F8(**(int **)(record + 0x54), record + 0x30, record);
    func_15E4F8(record);
}
