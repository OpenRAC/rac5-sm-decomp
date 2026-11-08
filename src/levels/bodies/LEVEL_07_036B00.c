extern char D_00222A98[];
struct Link;
extern void func_0A1AF8(struct Link *, int);
extern void func_036B78(void *, void *);

void func_036B00(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_0A1AF8((struct Link *)record, (int)D_00222A98);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_036B78(record, context);
}
