/* Boot 0x01E89C70 -- makes the skeleton current and copies its default bone components. */
extern char *g_pSkeletonInfo;
extern unsigned char boneComponents[];
extern void FastMemCopy__FPvPCvUi(void *, const void *, unsigned int);

void ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo(char *skeleton) {
    g_pSkeletonInfo = skeleton;
    FastMemCopy__FPvPCvUi(boneComponents, *(void **)(skeleton + 0xC),
                         *(unsigned int *)(skeleton + 4) * 3u);
}
