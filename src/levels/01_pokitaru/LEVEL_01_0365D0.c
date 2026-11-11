extern char D_0020DD98[];
struct Link;
extern void func_09FB18(struct Link *, int);
extern void func_036648(void *, void *);

void func_0365D0(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_09FB18((struct Link *)record, (int)D_0020DD98);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_036648(record, context);
}
