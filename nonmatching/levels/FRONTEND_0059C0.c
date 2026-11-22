/* USA FRONTEND.REL:0x0059C0 (22 November 2026): exact linked bytes under
 * pinned, ported from a sister decompilation twin, held.
 * Its placement is defined unlike the declaration in the accepted caller
 * sceGimPictureGetChunk__FPCvii_FRONTEND.
 * Reconcile the prototypes before promotion. No matching credit.
 */
/* FRONTEND:0x0059C0 -- returns the object pointer plus 0x10, or null for a null object. Ported from OpenRAC/rac5-sm-decomp src/boot/sceGimPictureGetRootChunk__FPCvi.c (sceGimPictureGetRootChunk__FPCvi). */
typedef struct SceGimPicture { int a; int b; int c; void *image; void *palette; } SceGimPicture;

void *func_0059C0(const SceGimPicture *p, int i) {
    if (p == 0) {
        return 0;
    }
    return (void *)((char *)p + 0x10);
}
