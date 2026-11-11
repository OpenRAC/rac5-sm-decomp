extern char D_001FCC98[];
struct Link;
extern void func_09E0D0(struct Link *, int);
extern void func_034358(void *, void *);

void func_0342E0(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_09E0D0((struct Link *)record, (int)D_001FCC98);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_034358(record, context);
}
