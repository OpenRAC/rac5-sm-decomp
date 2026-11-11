extern char D_00123DF8[];
struct Link;
extern void func_079708(struct Link *, int);
extern void func_02CE50(void *, void *);

void func_02CDD8(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_079708((struct Link *)record, (int)D_00123DF8);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_02CE50(record, context);
}
