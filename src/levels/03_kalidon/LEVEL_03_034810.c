extern char D_00226C98[];
struct Link;
extern void func_09F8A0(struct Link *, int);
extern void func_034888(void *, void *);

void func_034810(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_09F8A0((struct Link *)record, (int)D_00226C98);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_034888(record, context);
}
