extern char D_00227718[];
struct Link;
extern void func_0A4D30(struct Link *, int);
extern void func_037C90(void *, void *);

void func_037C18(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_0A4D30((struct Link *)record, (int)D_00227718);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_037C90(record, context);
}
