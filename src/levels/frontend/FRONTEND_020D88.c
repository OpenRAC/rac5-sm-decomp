extern char *D_0032814;
extern unsigned char D_0032819;

void func_0036F8(void);
int func_0205B8(int);
int func_020AE8(void);
void func_003E10(void);
void func_020BE0(void);
void func_021210(void *);

int func_020D88(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_0036F8();
    if (!D_0032814)
        return 0;
    if (func_0205B8(1))
        return 0;
    r = func_020AE8();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_0032819;
    D_0032819 = 0;
    func_003E10();
    func_020BE0();
    func_021210(a1);
    *(int *)((char *)D_0032814 + 4) = 8;
    *(int *)((char *)D_0032814 + 0xC) = r;
    D_0032819 = saved;
    return 1;
}
