extern char *func_0A83E0(int mode);
extern void func_136DD8(int, void *, void *);
extern void func_137070(int, int);
extern char D_00227A58[];
extern char *D_002082AC;

void func_0C5870(void)
{
    char *value = func_0A83E0(0);
    func_136DD8(0, D_00227A58, value);
    func_137070(0, *(int *)(D_002082AC + 0x3c) + 1);
}
