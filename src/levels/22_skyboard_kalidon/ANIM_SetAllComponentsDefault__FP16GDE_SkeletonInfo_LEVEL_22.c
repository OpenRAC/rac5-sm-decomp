extern char *D_00194C34;
extern char D_00193430[];
extern void func_021970(void *, int, int);

void ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo(char *record)
{
    D_00194C34 = record;
    func_021970(D_00193430, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
