extern char *func_0A3690(int mode);
extern void func_12CD70(int, void *, void *);
extern void func_12D008(int, int);
extern char D_001FC958[];
extern char *D_001DDDAC;

void func_0C0AC0(void)
{
    char *value = func_0A3690(0);
    func_12CD70(0, D_001FC958, value);
    func_12D008(0, *(int *)(D_001DDDAC + 0x3c) + 1);
}
