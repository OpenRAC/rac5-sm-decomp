/* LEVEL_08:0x1EC800 -- signale au sous-systeme 0x17 une zone de l'objet,
   transmet l'objet a un service de trace si le contexte global existe,
   puis laisse le service propre a l'objet achever le tour.

   Le contexte global est lu une seule fois ; ses quatre flottants
   partent en $f12..$f15 avec des entiers nuls alternes et le dernier a 1. */

typedef struct {
    int pad[5];
    float v14;
    float v18;
    float v1C;
    float v20;
} Ctx;

extern Ctx *D_003EAA80;

extern void func_0FB378(int a0, void *a1);
extern void func_088940(void *a0, Ctx *a1, int a2, int a3,
                        float v0, int a4, float v1, int a5,
                        float v2, int a6, float v3, int a7);
extern void func_1EC7C0(void *a0);

void func_1EC800(void *a0)
{
    Ctx *p;

    func_0FB378(0x17, (char *)a0 + 0x30);
    p = D_003EAA80;
    if (p != 0) {
        func_088940(a0, p, 0, 0,
                    p->v14, 0, p->v18, 0, p->v1C, 0, p->v20, 1);
    }
    func_1EC7C0(a0);
}
