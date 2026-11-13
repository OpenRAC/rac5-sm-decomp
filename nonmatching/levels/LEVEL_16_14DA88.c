/* USA LEVEL_16.REL:0x14DA88, 132-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 132 linked bytes; first differing word +0x2C.
 * Unaccepted; no matching credit. Recover scalar vector-copy load/store scheduling; aggregate copy instead generated wide unaligned accesses.
 */
/* Relay a position, replacing its height with the linked configuration value. */
typedef struct Vec3 { float x,y,z; } Vec3;
static inline void copy_vector(Vec3 *out, const Vec3 *source)
{
    out->x=source->x;
    out->y=source->y;
    out->z=source->z;
}
extern int func_015538(char *object);
extern void func_14CE70(void *, void *, char *, const Vec3 *);
void func_14DA88(void *owner, void *argument, char *object)
{
    Vec3 position;
    Vec3 *source = (Vec3 *)(object + 0x30);
    copy_vector(&position,source);
    if (func_015538(object))
        position.y = *(float *)(**(char ***)(object + 0x58) + 0x2DC);
    func_14CE70(owner, argument, object, &position);
}
