/* LEVEL_07:0x181130 -- snapshots a transform, rebuilds it, and scales a copied template table. */
typedef struct {
    char pad0[0x78];
    char mat[1];
} Sub;

typedef struct {
    float m[16];
    char pad0[0x14];
    float *sub;
} Obj;

typedef struct {
    float f[40];
} Big;

extern Big D_0024F650;
extern char D_00223F30[];
extern void func_128E80(float *pos, Obj *obj, char *mat);
extern void func_0734A0(float *m, Big *b, char *g);
extern void func_07E7F0(Obj *obj, int n);

int func_181130(Obj *obj)
{
    float m[16];
    Big b;
    char *s = (char *)obj->sub;

    m[8] = obj->m[8];
    m[9] = obj->m[9];
    m[10] = obj->m[10];
    m[11] = obj->m[11];
    m[0] = obj->m[0];
    m[1] = obj->m[1];
    m[2] = obj->m[2];
    m[3] = obj->m[3];
    m[4] = obj->m[4];
    m[5] = obj->m[5];
    m[6] = obj->m[6];
    m[7] = obj->m[7];
    m[12] = obj->m[12];
    m[13] = obj->m[13];
    m[14] = obj->m[14];
    m[15] = obj->m[15];
    func_128E80(&obj->m[12], obj, s + 0x78);
    b = D_0024F650;
    b.f[3] *= *(float *)(s + 0x84);
    b.f[2] *= *(float *)(s + 0x84);
    b.f[12] *= *(float *)(s + 0x84);
    b.f[11] *= *(float *)(s + 0x84);
    b.f[33] *= *(float *)(s + 0x84);
    b.f[27] *= *(float *)(s + 0x84);
    b.f[20] *= *(float *)(s + 0x84);
    b.f[21] *= *(float *)(s + 0x84);
    func_0734A0(m, &b, D_00223F30);
    func_07E7F0(obj, 1);
    return 3;
}
