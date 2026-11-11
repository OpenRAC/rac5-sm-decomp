extern char *D_001F5634;
extern char D_001F3E30[];
extern void func_024620(void *, int, int);

void ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo(char *record)
{
    D_001F5634 = record;
    func_024620(D_001F3E30, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
