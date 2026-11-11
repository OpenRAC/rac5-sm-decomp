extern void func_0887B8(void *, unsigned int);
extern void func_088720(int, void *);

void func_067B60(char *record, unsigned int mode)
{
    *(int *)(record + 0x37c) = 0xffff;
    *(int *)(record + 0x380) = 0xffff;
    *(int *)(record + 0x384) = 0xffff;
    *(unsigned int *)(record + 0x38c) = mode;
    *(unsigned int *)(record + 0x388) = mode;
    func_0887B8(record + 0x370, mode & 0xff);
    func_088720(*(int *)(*(int *)(record + 0x59c) + 0x48), record + 0x370);
}
