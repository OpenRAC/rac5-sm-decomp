extern unsigned int g_JointBufferSpaceUsed;  /* 0x01EF58F0 */
extern int g_JointMatrixActiveBuffer;        /* 0x01EF58F4 */
extern unsigned int g_JointMatrixBufferSize; /* 0x01EF58F8 */
extern char *g_JointMatrixBuffers[2];        /* 0x01F7E2A0 */

char *ANIM_AllocJointMatrices(unsigned int size) {
    unsigned int used;
    unsigned int space;

    space = g_JointMatrixBufferSize;
    used = g_JointBufferSpaceUsed;
    if (space - used < size) return 0;
    g_JointBufferSpaceUsed = (used + size + 3) & ~3u;
    return g_JointMatrixBuffers[g_JointMatrixActiveBuffer] + used;
}
