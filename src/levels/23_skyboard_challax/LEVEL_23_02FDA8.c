extern char D_001E0F18[];
struct Link;
extern void func_096860(struct Link *, int);
extern void func_02FE20(void *, void *);

void func_02FDA8(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_096860((struct Link *)record, (int)D_001E0F18);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_02FE20(record, context);
}
