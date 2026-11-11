extern char D_001F7998[];
struct Link;
extern void func_09CDD0(struct Link *, int);
extern void func_032E50(void *, void *);

void func_032DD8(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_09CDD0((struct Link *)record, (int)D_001F7998);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_032E50(record, context);
}
