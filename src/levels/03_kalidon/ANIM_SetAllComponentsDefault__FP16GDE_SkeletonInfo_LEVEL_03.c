extern char *D_00259EB4;
extern char D_002586B0[];
extern void func_026EC0(void *, int, int);

void ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo(char *record)
{
    D_00259EB4 = record;
    func_026EC0(D_002586B0, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
