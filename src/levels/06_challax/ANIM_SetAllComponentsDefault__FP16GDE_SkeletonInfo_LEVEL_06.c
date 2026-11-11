extern char *D_0022BDB4;
extern char D_0022A5B0[];
extern void func_025490(void *, int, int);

void ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo(char *record)
{
    D_0022BDB4 = record;
    func_025490(D_0022A5B0, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
