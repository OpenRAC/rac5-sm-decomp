extern void func_0F0440(void *, int, int);

void func_0F18A0(char *record)
{
    if (*(int *)(record + 0x14) != 0) {
        func_0F0440(*(void **)(record + 0x14), 0, 0);
    }
    if (*(int *)(record + 0x18) != 0) {
        func_0F0440(*(void **)(record + 0x18), 0, 0);
    }
    if (*(int *)(record + 0x0c) != 0) {
        func_0F0440(*(void **)(record + 0x0c), 0, 0);
    }
    if (*(int *)(record + 8) != 0) {
        func_0F0440(*(void **)(record + 8), 0, 0);
    }
    func_0F0440(record, 0, 0);
}
