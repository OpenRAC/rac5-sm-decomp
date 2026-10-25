/* LEVEL_03:0x120130 -- direction unitaire aleatoire, mise a l'echelle.

   Profil `gnu-ee-trial-divpad` : le retail a deux `nop` avant le `sqrt.s`
   (0x12019C) et sauve les registres dans l'ordre du profil.

   Formes mesurees :
   - `3.1415927f / 1073741824.0f` se replie en 0x31490FDB (pi * 2^-30) ;
   - la constante negative doit rester ACCENTUEE : ecrire `x + (-3.1415927f)`
     (ou `-3.1415927f + x`).  `x - 3.1415927f` fait emettre `sub.s` avec
     +pi (lui 0x4049) la ou le retail a `add.s` avec -pi (lui 0xC049) ;
   - `sqrtf` est developpe par le cc1 (sqrt.s + test NaN + jal sqrtf) ;
   - le signe : `if (a < 0.0f) s = -s;` donne le `mov.s` dans le cran du
     `bc1f` et le `neg.s` en chute. */

typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern int rand(void);
extern float cosf(float);
extern float sqrtf(float);

void func_120130(VEC3 *out, float scale)
{
    float a = (float)rand() * (3.1415927f / 1073741824.0f) + (-3.1415927f);
    float c = cosf(a);
    float s = sqrtf(1.0f - c * c);

    if (a < 0.0f) {
        s = -s;
    }
    out->x = c * scale;
    out->y = s * scale;
}
