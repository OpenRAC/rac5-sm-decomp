extern void *func_0198F0(void);
extern void func_082088(int, void *);

void func_16BD30(char *record)
{
    char *nested = *(char **)(record + 0x54);
    void *result = func_0198F0();
    func_082088(*(int *)(nested + 0x10), result);
}
