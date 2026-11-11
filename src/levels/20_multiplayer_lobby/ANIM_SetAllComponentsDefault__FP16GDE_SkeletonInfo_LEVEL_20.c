extern char *D_00148D34;
extern char D_00147530[];
extern void func_0215F0(void *, int, int);

void ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo(char *record)
{
    D_00148D34 = record;
    func_0215F0(D_00147530, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
