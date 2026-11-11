extern char *D_001E67B4;
extern char D_001E4FB0[];
extern void func_0243F8(void *, int, int);

void ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo(char *record)
{
    D_001E67B4 = record;
    func_0243F8(D_001E4FB0, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
