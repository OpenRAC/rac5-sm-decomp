extern void func_0F0A88(void *, int, int);

void func_0F1EE8(char *record)
{
    if (*(int *)(record + 0x14) != 0) {
        func_0F0A88(*(void **)(record + 0x14), 0, 0);
    }
    if (*(int *)(record + 0x18) != 0) {
        func_0F0A88(*(void **)(record + 0x18), 0, 0);
    }
    if (*(int *)(record + 0x0c) != 0) {
        func_0F0A88(*(void **)(record + 0x0c), 0, 0);
    }
    if (*(int *)(record + 8) != 0) {
        func_0F0A88(*(void **)(record + 8), 0, 0);
    }
    func_0F0A88(record, 0, 0);
}
