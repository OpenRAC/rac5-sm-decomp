extern char *D_00259834;
extern char D_00258030[];
extern void func_026C70(void *, int, int);

void ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo(char *record)
{
    D_00259834 = record;
    func_026C70(D_00258030, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
