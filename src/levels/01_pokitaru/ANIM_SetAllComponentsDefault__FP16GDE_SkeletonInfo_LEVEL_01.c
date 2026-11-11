extern char *D_0023F034;
extern char D_0023D830[];
extern void func_026FE0(void *, int, int);

void ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo(char *record)
{
    D_0023F034 = record;
    func_026FE0(D_0023D830, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
