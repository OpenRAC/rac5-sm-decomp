extern void func_089758(void *, unsigned int);
extern void func_0896C0(int, void *);

void func_068BC8(char *record, unsigned int mode)
{
    *(int *)(record + 0x37c) = 0xffff;
    *(int *)(record + 0x380) = 0xffff;
    *(int *)(record + 0x384) = 0xffff;
    *(unsigned int *)(record + 0x38c) = mode;
    *(unsigned int *)(record + 0x388) = mode;
    func_089758(record + 0x370, mode & 0xff);
    func_0896C0(*(int *)(*(int *)(record + 0x59c) + 0x48), record + 0x370);
}
