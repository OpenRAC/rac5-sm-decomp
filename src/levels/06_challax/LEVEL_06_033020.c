extern char D_001FCC18[];
struct Link;
extern void func_09A2F0(struct Link *, int);
extern void func_033098(void *, void *);

void func_033020(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_09A2F0((struct Link *)record, (int)D_001FCC18);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_033098(record, context);
}
