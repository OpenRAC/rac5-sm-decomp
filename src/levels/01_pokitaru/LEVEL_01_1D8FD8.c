/* LEVEL_01:0x1D8FD8 -- place `dst` a `scale` distance de `src` le long de la
   direction src->dst, normalisee.

   Profil `gnu-ee-trial-divpad` : le retail a deux `nop` avant le `div.s`
   (0x1D9080) et sauve les registres generaux avant le registre flottant.

   Formes mesurees :
   - la direction est un VEC3 local `d`, ecrit champ par champ (x, y, z) ;
   - `sqrtf` est le vrai `sqrtf` : le cc1 epingle developpe lui-meme le
     `sqrt.s`, le test `c.eq.s` de NaN et l'appel de repli `jal sqrtf` ;
   - le seuil est 0x34800000 = 2^-22 (2.384185791015625e-07f), PAS
     FLT_EPSILON (0x34000000).  Attention : `cc1` imprime la constante en
     decimal et c'est l'assembleur qui la relit -- verifier les bits.
   - le test est ecrit `!(len2 < seuil)` : `len2 >= seuil` ferait `c.le.s`
     + `bc1f` la ou le retail a `c.lt.s` + `bc1t` ;
   - la mise a l'echelle est ecrite DANS le local (`d.x *= scale;` puis
     `dst->x = src->x + d.x;`) : sans ces magasins, il manque les trois
     `swc1` vers la pile et le corps perd 12 octets. */

typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern float sqrtf(float);

void func_1D8FD8(VEC3 *dst, VEC3 *src, float scale)
{
    VEC3 d;
    float len2;

    d.x = dst->x - src->x;
    d.y = dst->y - src->y;
    d.z = dst->z - src->z;
    len2 = d.x * d.x + d.y * d.y + d.z * d.z;
    if (!(len2 < 2.384185791015625e-07f)) {
        float inv = 1.0f / sqrtf(len2);
        d.x *= inv;
        d.y *= inv;
        d.z *= inv;
    }
    d.x *= scale;
    d.y *= scale;
    d.z *= scale;
    dst->x = src->x + d.x;
    dst->y = src->y + d.y;
    dst->z = src->z + d.z;
}
