/* ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo 0x01E89C70 (14 November
 * 2026).
 * Measured pinned: 10 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    unsigned char pad[4];
    unsigned int bone_count;
    unsigned char pad2[4];
    void *defaults;
} tSkeletonInfo;

extern tSkeletonInfo *g_pSkeletonInfo;
extern char boneComponents[];
extern void FastMemCopy__FPvPCvUi(void *dst, const void *src, unsigned int size);

void ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo(tSkeletonInfo *info) {
    unsigned int count;

    g_pSkeletonInfo = info;
    count = info->bone_count;
    FastMemCopy__FPvPCvUi(boneComponents, info->defaults, count * 3);
}
