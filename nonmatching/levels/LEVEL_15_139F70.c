/* LEVEL_15.REL:0x139F70: reviewed 1184-byte candidate, held for ABI review.
 * Reads a serialized settings record into a runtime config, rescaling the cell
 * size by a random factor.
 * gnu-ee-trial C with gnu-ee-trial links 1184/1184 bytes and is byte-exact at
 * this and 1 other USA placement, but the prototypes disagree.
 * It declares func_0F5768 returning int with (int), but the accepted
 * LEVEL_15_0F5768.c defines it returning int with (pointer).
 * It declares func_1119C0 returning void with (pointer, pointer), but the
 * accepted LEVEL_15_1119C0.c defines it returning void with (int, pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Dims { int w, h, id, flag; } Dims;
typedef struct Obj {
    char p0[0x54];
    char *src;
    char p1[4];
    unsigned seed;
} Obj;

extern void func_139EC0(unsigned char *out, void *src);
extern void func_139F10(void *dst, void *src, float f);
extern void func_139ED0(void *dst, void *src, float f);
extern void func_139EA0(void *dst, void *src);
extern int func_022148(void);
extern int func_0F5768(int key);
extern void func_1119C0(void *a, void *b);
extern void func_139E58(void);
extern void func_0F5848(void);

#define AT(p, o) ((void *)((char *)(p) + (o)))
#define FL(p, o) (*(float *)((char *)(p) + (o)))

void func_139F70(Obj *self, char *cfg)
{
    unsigned char flag;
    unsigned char flag2;
    char *src;
    Dims *dims;
    char *out;
    void **list;
    char *lst;
    unsigned seed;
    int w, h, area;
    float oldarea, newarea, ratio, k;
    int v;

    list = *(void ***)(cfg + 0x28);
    src = self->src;
    dims = *(Dims **)(cfg + 4);
    out = *(char **)(cfg + 0x2C);
    lst = *(char **)list;
    flag = 0;
    func_139EC0(&flag, src + 0x24);
    *(int *)out = flag != 0;
    func_139F10(cfg + 0x14, src + 0x28, 1.0f);
    func_139ED0(cfg + 0x24, src + 0x14, 30.0f);
    func_139F10(cfg + 0x34, src + 0x34, -1.0f);
    func_139F10(cfg + 0x54, src + 0x34, 1.0f);
    func_139ED0(cfg + 0x60, src + 0x20, 30.0f);
    func_139ED0(cfg + 0x64, src + 0x18, 30.0f);
    func_139ED0(cfg + 0x70, src + 0x48, 0.01745329238474369f);
    func_139ED0(cfg + 0x74, src + 0x4C, 0.01745329238474369f);
    func_139ED0(cfg + 0x78, src + 0x50, 0.01745329238474369f);
    func_139F10(cfg + 0x7C, src + 0x54, 1.0f);
    func_139ED0(cfg + 0x90, src + 0x1C, 30.0f);
    func_139EA0(dims, src + 0x40);
    func_139EA0((char *)dims + 4, src + 0x44);
    if (func_022148() & 0xFF) {
        w = ((int *)dims)[0];
        h = ((int *)dims)[1];
        seed = (self->seed % 127773) * 16807 - (self->seed / 127773) * 2836;
        seed = seed & 0x7FFFFFFF;
        area = w * h;
        if (seed > 0x3FFFFFFF) {
            ((int *)dims)[0] = w * 2;
            ((int *)dims)[1] = (h * 3) / 2;
        } else {
            ((int *)dims)[1] = h * 2;
            ((int *)dims)[0] = (w * 3) / 2;
        }
        oldarea = (float)area;
        newarea = (float)(((int *)dims)[0] * ((int *)dims)[1]);
        ratio = newarea / oldarea;
        k = 1.0f / ratio;
        FL(cfg, 0x90) = FL(cfg, 0x90) * k;
        FL(cfg, 0x40) = FL(cfg, 0x40) * k;
        FL(cfg, 0x60) = FL(cfg, 0x60) * k;
    }
    func_139ED0(lst + 4, src + 0x6C, 0.01745329238474369f);
    func_139ED0(lst + 8, src + 0x70, 0.01745329238474369f);
    func_139ED0(lst + 0xC, src + 0x74, 0.01745329238474369f);
    func_139F10(lst + 0x10, src + 0x60, 1.0f);
    func_139EA0(out + 8, src + 0x10);
    func_139ED0(out + 4, src + 0xC, 1.0f);
    func_139ED0(out + 0xC, src + 0x78, 0.03333333507180214f);
    func_139ED0(out + 0x10, src + 0x7C, 0.0011111112544313073f);
    if (FL(out, 0x10) < FL(out, 0xC) * 0.03333333507180214f)
        FL(out, 0x10) = FL(out, 0xC) * 0.03333333507180214f;
    func_139ED0(out + 0x50, src + 0x80, 0.03333333507180214f);
    func_139ED0(out + 0x54, src + 0x84, 0.0011111112544313073f);
    func_139ED0(out + 0x5C, src + 0x88, 0.01745329238474369f);
    func_139ED0(out + 0x60, src + 0x8C, 0.01745329238474369f);
    func_139ED0(out + 0x74, src + 0x90, 30.0f);
    func_139ED0(out + 0x78, src + 0x94, 30.0f);
    func_139ED0(out + 0x7C, src + 0x98, 30.0f);
    func_139ED0(out + 0x80, src + 0x9C, 30.0f);
    func_139F10(out + 0x84, src + 0xA0, 1.0f);
    func_139ED0(out + 0x90, src + 0xAC, 0.03333333507180214f);
    func_139ED0(out + 0x94, src + 0xB0, 0.0011111112544313073f);
    func_139ED0(out + 0x98, src + 0xB4, 1.0f);
    func_139ED0(out + 0x9C, src + 0xB8, 30.0f);
    func_139ED0(out + 0xA0, src + 0xBC, 30.0f);
    v = func_0F5768(*(int *)(src + 4));
    ((int *)dims)[2] = v;
    if (v != -1) {
        func_139EC0(&flag2, src + 8);
        ((int *)dims)[3] = flag2 != 0;
        *(void (**)(void))(cfg + 8) = func_139E58;
    } else {
        *(void (**)(void))(cfg + 8) = func_0F5848;
    }
    func_1119C0(list, out);
}
