/* LEVEL_10:0x18CB90 -- starts an object's activation when its mode bits request it. */
typedef struct G {
    char pad0[0x30];
    char f30[1];
} G;
typedef struct S {
    int f0;
    int f4;
} S;
typedef struct O {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0xE];
    S *f54;
    char pad58[0xC];
    int f64;
    char pad68[8];
    float f70;
} O;
extern G D_0023E540;
extern char D_00001100[];
extern int func_084D08(int a, char *b);
extern void func_07CCA0(O *o, int a);
extern void func_04A5B0(G *g, int a);
extern int func_0699B0(G *g);
extern void func_069870(G *g, int a);
extern void func_000E18(int index, int first, int second);
extern void func_088150(int a);

void func_18CB90(O *o)
{
    S *s3;
    int s2;
    G *g;
    s3 = o->f54;
    if (o->b45 == 0) {
        s2 = o->f64 & 7;
        if (s2 == 1) {
            g = &D_0023E540;
            if (func_084D08(s3->f4, g->f30) == 0) {
                func_07CCA0(o, 1);
                return;
            }
            o->b45 = s2;
            o->f64 = o->f64 & ~0x10;
            o->f70 = 60.0f;
            func_04A5B0(g, s3->f0);
            if (func_0699B0(g))
                func_069870(g, 1);
            func_000E18(0, (int)D_00001100, (int)o);
            func_088150(0x200);
        }
    }
}
