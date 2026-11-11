extern char *D_001F54B4;
extern char D_001F3CB0[];
extern void func_024A78(void *, int, int);

void ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo(char *record)
{
    D_001F54B4 = record;
    func_024A78(D_001F3CB0, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
