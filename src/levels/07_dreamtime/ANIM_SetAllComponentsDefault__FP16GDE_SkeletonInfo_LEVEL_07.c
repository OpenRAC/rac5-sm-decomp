extern char *D_00254934;
extern char D_00253130[];
extern void func_027340(void *, int, int);

void ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo(char *record)
{
    D_00254934 = record;
    func_027340(D_00253130, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
