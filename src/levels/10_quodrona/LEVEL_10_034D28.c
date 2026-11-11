extern char D_00216D18[];
struct Link;
extern void func_0A0BF8(struct Link *, int);
extern void func_034DA0(void *, void *);

void func_034D28(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_0A0BF8((struct Link *)record, (int)D_00216D18);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_034DA0(record, context);
}
