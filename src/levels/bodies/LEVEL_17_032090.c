extern char D_001B61F8[];
struct Link;
extern void func_08E2F8(struct Link *, int);
extern void func_032108(void *, void *);

void func_032090(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_08E2F8((struct Link *)record, (int)D_001B61F8);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_032108(record, context);
}
