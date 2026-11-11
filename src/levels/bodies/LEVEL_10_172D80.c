/* LEVEL_10:0x172D80 -- formats and shows a count message, then plays a positional sound and a follow-up. */
extern int sprintf(char *buf, const char *fmt, ...);
extern void SND_PlayPositionalSound(void *snd, void *pos, float f, void *pp, unsigned int u) __asm__("SND_PlayPositionalSound__FP9GDE_SoundPC4VEC3fPP14SND_PositionalUi");
extern int func_1743B8(int a, int b);
extern const char *func_130310(int id);
extern void func_130160(char *s, int n);
extern void func_0BA230(void);
extern void func_0BA3A0(char *s, int a, int b);
struct R {
    int first;
};
struct O {
    char pad[0x30];
    char pos[0x28];
    struct R *r;
};
extern char D_0039F1A8[];
extern void *D_00211878;
extern unsigned int D_001FCFB8;

void func_172D80(struct O *o)
{
    int n;
    if (o->r->first == 0) {
        return;
    }
    n = func_1743B8(o->r->first, 0x19);
    if (n == 0) {
        return;
    }
    if (n == 1) {
        char *s = D_0039F1A8;
        sprintf(s, func_130310(0x628), 1);
        func_130160(s, 0x40);
    } else {
        char *s = D_0039F1A8;
        sprintf(s, func_130310(0x629), n);
        func_130160(s, 0x40);
    }
    if (D_00211878 != 0) {
        SND_PlayPositionalSound(D_00211878, o->pos, 0.0f, 0, D_001FCFB8);
    }
    func_0BA230();
    func_0BA3A0(D_0039F1A8, 0, 0x5A);
}
