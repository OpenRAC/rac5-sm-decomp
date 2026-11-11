extern char D_001C3F78[];
struct Link;
extern void func_08E698(struct Link *, int);
extern void func_031B50(void *, void *);

void func_031AD8(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_08E698((struct Link *)record, (int)D_001C3F78);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_031B50(record, context);
}
