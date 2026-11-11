extern void func_10DA40(void *, int, int);

void func_10EEA0(char *record)
{
    if (*(int *)(record + 0x14) != 0) {
        func_10DA40(*(void **)(record + 0x14), 0, 0);
    }
    if (*(int *)(record + 0x18) != 0) {
        func_10DA40(*(void **)(record + 0x18), 0, 0);
    }
    if (*(int *)(record + 0x0c) != 0) {
        func_10DA40(*(void **)(record + 0x0c), 0, 0);
    }
    if (*(int *)(record + 8) != 0) {
        func_10DA40(*(void **)(record + 8), 0, 0);
    }
    func_10DA40(record, 0, 0);
}
