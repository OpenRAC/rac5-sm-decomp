extern char D_00162518[];
struct Link;
extern void func_080488(struct Link *, int);
extern void func_02C028(void *, void *);

void func_02BFB0(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_080488((struct Link *)record, (int)D_00162518);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_02C028(record, context);
}
