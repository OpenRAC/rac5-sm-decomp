extern char D_001C2D78[];
struct Link;
extern void func_08EE00(struct Link *, int);
extern void func_0327C0(void *, void *);

void func_032748(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_08EE00((struct Link *)record, (int)D_001C2D78);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_0327C0(record, context);
}
