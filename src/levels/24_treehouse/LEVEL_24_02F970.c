extern char D_001DEB18[];
struct Link;
extern void func_099398(struct Link *, int);
extern void func_02F9E8(void *, void *);

void func_02F970(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_099398((struct Link *)record, (int)D_001DEB18);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_02F9E8(record, context);
}
