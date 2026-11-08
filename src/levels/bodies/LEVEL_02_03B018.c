extern char D_00222D18[];
struct Link;
extern void func_0A6408(struct Link *, int);
extern void func_03B090(void *, void *);

void func_03B018(char *record, void *context, unsigned int first,
                 unsigned int second, unsigned int third)
{
    func_0A6408((struct Link *)record, (int)D_00222D18);
    *(unsigned int *)(record + 0x20) = first;
    *(unsigned int *)(record + 0x28) = second;
    *(unsigned int *)(record + 0x24) = third;
    func_03B090(record, context);
}
