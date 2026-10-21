/* LEVEL_08.REL:0x005b30 -- RAC5 vague 22 (L09), vecteur + un resultat.
 *
 * Le retail appelle un helper local qui ecrit trois flottants sur la pile,
 * puis combine les trois composantes du vecteur source avec elles.
 */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_005AC8(float *out, void *arg);

void func_005B30(V3 *dst, V3 *src, void *arg)
{
    float tmp[3];

    func_005AC8(tmp, arg);
    dst->x = src->x + tmp[0];
    dst->y = src->y + tmp[1];
    dst->z = src->z + tmp[2];
}
