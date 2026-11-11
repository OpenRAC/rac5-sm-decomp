typedef int (*Fn0)(void);
typedef void (*Fn1)(int, int, int, int, int, int);

void func_2374F8(Fn0 param_1, Fn0 param_2, int param_3, int param_4,
                 Fn0 param_5, int param_6)
{
    int iVar3;
    char *p;
    int uVar4;
    int uVar5;

    iVar3 = param_1();
    p = *(char **)(iVar3 + 4);
    iVar3 += *(short *)(p + 0x10);
    p += 0x10;
    uVar4 = param_2();
    uVar5 = param_5();
    (*(Fn1 *)(p + 4))(iVar3, uVar4, param_3, param_4, uVar5, param_6);
}
