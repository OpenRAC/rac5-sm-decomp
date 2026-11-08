/* LEVEL_01.REL:0x11C280: reviewed 124-byte candidate.
 * pinned C with gnu-ee-trial links 124 bytes; first differs at +96.
 * Retry: Find a legal source form or qualified schedule that places the three final
 * independent float stores in retail order before the call.
 * No matching credit.
 */
extern void func_11B748(void *a, void *b, float *negative, void *c, float *scaled, void *d, void *e, void *f);
void func_11C280(void *a, float unused_float, float scale, void *b, void *c, const float *vector, const float *d, const float *e, const float *f)
{
    float negative[3];
    float scaled[3];
    scaled[0] = scale * vector[0];
    negative[0] = -d[1];
    negative[2] = -f[1];
    scaled[1] = scale * vector[1];
    scaled[2] = scale * vector[2];
    negative[1] = -e[1];
    func_11B748(a, b, negative, c, scaled, (void *)d, (void *)e, (void *)f);
}
