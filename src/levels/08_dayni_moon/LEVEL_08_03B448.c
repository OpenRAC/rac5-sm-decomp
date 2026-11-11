extern char D_00257A18[];
struct Link;
extern void func_0AA418(struct Link *, int);
extern void func_03B4C0(void *, void *);

void func_03B448(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_0AA418((struct Link *)record, (int)D_00257A18);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_03B4C0(record, context);
}
