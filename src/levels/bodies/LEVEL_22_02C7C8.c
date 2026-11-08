extern char D_0016B218[];
struct Link;
extern void func_08E1C8(struct Link *, int);
extern void func_02C840(void *, void *);

void func_02C7C8(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_08E1C8((struct Link *)record, (int)D_0016B218);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_02C840(record, context);
}
