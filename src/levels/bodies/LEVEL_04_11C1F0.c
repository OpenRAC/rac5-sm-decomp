extern void func_11AD90(void *, int, int);

void func_11C1F0(char *record)
{
    if (*(int *)(record + 0x14) != 0) {
        func_11AD90(*(void **)(record + 0x14), 0, 0);
    }
    if (*(int *)(record + 0x18) != 0) {
        func_11AD90(*(void **)(record + 0x18), 0, 0);
    }
    if (*(int *)(record + 0x0c) != 0) {
        func_11AD90(*(void **)(record + 0x0c), 0, 0);
    }
    if (*(int *)(record + 8) != 0) {
        func_11AD90(*(void **)(record + 8), 0, 0);
    }
    func_11AD90(record, 0, 0);
}
