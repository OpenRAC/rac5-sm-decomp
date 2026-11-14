/* USA LEVEL_01.REL:0x1B27C0, 192-byte candidate (14 November 2026).
 * Measured pinned: 22 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct St { float f0; float f4; float f8; float fC; void *w10; char pad14[6]; unsigned char b1A; } St;
typedef struct Obj { char pad00[0x30]; float pos[3]; char pad3C[9]; unsigned char b45; char pad46[0xE]; St *f54; } Obj;
extern void func_1B2DB8(void *o);
extern void func_07C670(char *a0, int a1);
extern int func_080C48(void *argument, void (*callback)(void *), unsigned int key);
static __inline__ void Copy3(float *d, float *s) { d[0] = s[0]; d[1] = s[1]; d[2] = s[2]; }
void func_1B27C0(Obj *o)
{
    St *s;
    if (o->b45 != 0) return;
    s = o->f54;
    if (s->w10 != 0) Copy3(o->pos, (float *)s->w10);
    s->f4 += s->fC;
    s->f0 += s->f8;
    if (s->f4 <= 0.0f) {
        o->b45 = 1;
        if (s->b1A == 0) func_07C670((char *)o, 1);
        return;
    }
    s->fC -= 0.016666668f;
    func_080C48(o, func_1B2DB8, 1);
}
