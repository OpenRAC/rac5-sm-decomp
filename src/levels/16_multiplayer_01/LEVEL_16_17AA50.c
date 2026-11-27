/* LEVEL_16:0x17AA50 -- placement copy of LEVEL_01_1B27C0.c: state handler: copies the linked record's position into the object, steps the record's two timers and, when the first runs out, switches state and releases the effect; otherwise decays the second and re-arms the callback. */
typedef struct St { float f0; float f4; float f8; float fC; void *w10; char pad14[6]; unsigned char b1A; } St;
typedef struct Obj { char pad00[0x30]; float pos[3]; char pad3C[9]; unsigned char b45; char pad46[0xE]; St *f54; } Obj;
extern void func_17B048(void *o);
extern void func_06F940(char *a0);
extern int func_073790(void *argument, void (*callback)(void *), unsigned int key);
static __inline__ void Copy3(float *d, float *s) { d[0] = s[0]; d[1] = s[1]; d[2] = s[2]; }
void func_17AA50(Obj *o)
{
    St *s;
    if (o->b45 != 0) return;
    s = o->f54;
    if (s->w10 != 0) Copy3(o->pos, (float *)s->w10);
    s->f4 += s->fC;
    s->f0 += s->f8;
    if (s->f4 <= 0.0f) {
        o->b45 = 1;
        if (s->b1A == 0) ((void (*)(char *a0, int a1))func_06F940)((char *)o, 1);
        return;
    }
    s->fC -= 0.016666668f;
    func_073790(o, func_17B048, 1);
}
