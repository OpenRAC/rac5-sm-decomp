/* USA LEVEL_16.REL:0x17F658, 164-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 160 linked bytes; first differing word +0xC.
 * Unaccepted; no matching credit. Recover the elevated vector-copy lifetime and byte-valued test of the integer collision-query result.
 */
/* Query support below an elevated position and adjust the returned height. */
typedef struct Vec3 { float x,y,z; } Vec3;
extern float D_001DE404;
extern int func_01E480(float *, void *, const Vec3 *, int, int, float);
static inline void copy_vector(Vec3 *out,const Vec3 *in)
{
    out->x=in->x; out->y=in->y; out->z=in->z;
}
int func_17F658(unsigned char *object)
{
    unsigned char *state=*(unsigned char **)(object+0x58);
    unsigned char query[32];
    Vec3 point;
    Vec3 *source=(Vec3 *)(object+0x30);
    *(int *)(state+0x18)=0;
    copy_vector(&point,source);
    point.y+=0.2f;
    if ((unsigned char)func_01E480((float *)(state+0x14),query,&point,56,0,point.y-D_001DE404)) {
        *(float *)(state+0x14)-=0.2f;
        return 1;
    }
    return 0;
}
