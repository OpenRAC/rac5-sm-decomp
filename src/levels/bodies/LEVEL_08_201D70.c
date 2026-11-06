extern char D_003EB140[];
extern char D_003EB1A0[];
extern void func_202F20(void *);
extern void func_20FB90(void *);
void func_201D70(void)
{
    char *base = D_003EB140;
    func_202F20(base + 0x1c);
    func_20FB90(D_003EB1A0);
    *(int *)(base + 0x3c) = 0;
}