/* LEVEL_03.REL:0x11A270, bounded 196-byte candidate.
 * Isolated pinned C object: 188 bytes; first linked
 * difference at body byte +4. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
typedef struct {
    float x, y, z;
} Vec3;

extern void func_119950(void *p1, void *p2, Vec3 *a, void *p4, Vec3 *b);

void func_0011A270(void *p1, void *p2, Vec3 *v, void *p4, Vec3 *e, Vec3 *b, Vec3 *c,
                   Vec3 *d, float unused, float scale)
{
    Vec3 out;
    Vec3 scaled;

    out.x = v->x * b->x + v->y * b->y + v->z * b->z;
    out.y = v->x * c->x + v->y * c->y + v->z * c->z;
    out.z = v->x * d->x + v->y * d->y + v->z * d->z;
    scaled.x = scale * e->x;
    scaled.y = scale * e->y;
    scaled.z = scale * e->z;
    func_119950(p1, p2, &out, p4, &scaled);
}
