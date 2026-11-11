extern void func_115B70(void *, int, int);

void func_116FD0(char *record)
{
    if (*(int *)(record + 0x14) != 0) {
        func_115B70(*(void **)(record + 0x14), 0, 0);
    }
    if (*(int *)(record + 0x18) != 0) {
        func_115B70(*(void **)(record + 0x18), 0, 0);
    }
    if (*(int *)(record + 0x0c) != 0) {
        func_115B70(*(void **)(record + 0x0c), 0, 0);
    }
    if (*(int *)(record + 8) != 0) {
        func_115B70(*(void **)(record + 8), 0, 0);
    }
    func_115B70(record, 0, 0);
}
