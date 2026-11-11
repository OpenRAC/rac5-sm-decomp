/* LEVEL_04:0x17A158 -- prepare un repere local, y pose la constante
   globale en deuxieme case, puis le remet au service avec les deux
   pointeurs recus. */

typedef struct {
    float v[4];
} Quad;

extern float D_0024FC2C;
extern void func_019F78(float *a0);
extern void func_179AE0(void *a0, void *a1, float *a2);

void func_17A158(void *a0, void *a1)
{
    Quad q;

    func_019F78(q.v);
    q.v[1] = D_0024FC2C;
    func_179AE0(a0, a1, q.v);
}
