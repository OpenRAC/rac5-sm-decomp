extern void func_105DF8(void *, int, int);

void func_107258(char *record)
{
    if (*(int *)(record + 0x14) != 0) {
        func_105DF8(*(void **)(record + 0x14), 0, 0);
    }
    if (*(int *)(record + 0x18) != 0) {
        func_105DF8(*(void **)(record + 0x18), 0, 0);
    }
    if (*(int *)(record + 0x0c) != 0) {
        func_105DF8(*(void **)(record + 0x0c), 0, 0);
    }
    if (*(int *)(record + 8) != 0) {
        func_105DF8(*(void **)(record + 8), 0, 0);
    }
    func_105DF8(record, 0, 0);
}
