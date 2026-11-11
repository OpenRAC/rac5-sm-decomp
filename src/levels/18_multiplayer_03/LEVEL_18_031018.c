extern char D_001C42F8[];
struct Link;
extern void func_08DE18(struct Link *, int);
extern void func_031090(void *, void *);

void func_031018(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_08DE18((struct Link *)record, (int)D_001C42F8);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_031090(record, context);
}
