/* LEVEL_03:0x12F880 -- passe l'objet au service de trace quand le
   contexte global existe, avec ses quatre flottants et des entiers nuls
   alternes. */

typedef struct {
    int pad[5];
    float v14;
    float v18;
    float v1C;
    float v20;
} Ctx;

extern Ctx *D_0021F5B0;

extern void func_0807B0(void *a0, Ctx *a1, int a2, int a3,
                        float v0, int a4, float v1, int a5,
                        float v2, int a6, float v3, int a7);

void func_12F880(void *a0)
{
    Ctx *p = D_0021F5B0;

    if (p == 0) {
        return;
    }
    func_0807B0(a0, p, 0, 0, p->v14, 0, p->v18, 0, p->v1C, 0, p->v20, 1);
}
