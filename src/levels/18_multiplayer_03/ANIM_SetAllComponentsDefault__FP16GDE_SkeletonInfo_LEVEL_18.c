extern char *D_001F5834;
extern char D_001F4030[];
extern void func_024028(void *, int, int);

void ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo(char *record)
{
    D_001F5834 = record;
    func_024028(D_001F4030, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
