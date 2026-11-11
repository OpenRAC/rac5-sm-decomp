/* LEVEL_23:0x13EBB8 -- switches an actor between state codes, setting up the effect on entering state 3. */
typedef struct {
    char pad0[0x14];
    float f14, f18, f1C, f20;
} Src;

typedef struct {
    char pad0[0xA0];
    int fA0;
    float fA4;
} Ext;

typedef struct {
    char pad0[0x45];
    unsigned char state;
    char pad46[0x1E];
    int flags;
    char pad68[0xC];
} Actor;

typedef struct {
    char pad0[0x58];
    Ext *ext;
} ActorX;

extern Src *D_003636EC;
extern int D_001C73B8;
extern void func_13EB80(void *a);
extern void func_077DD0(void *a, Src *s, int b, int c, int d, int e, int f, int g, float h, float i, float j, float k);
extern float func_17E7E0(char *a);

void func_13EBB8(unsigned char *p, int x, int y)
{
    Actor *a = (Actor *)p;
    Ext *e = ((ActorX *)p)->ext;
    Src *s;

    x &= 0xFF;
    y &= 0xFF;

    if (x != 0) {
        if (x >= 3) {
            if (x == 3) {
                a->flags &= ~0x20;
            }
        }
    }
    if (y != 0) {
        if (y >= 3) {
            if (y == 3) {

                func_13EB80(a);
                s = D_003636EC;
                if (s != 0)
                    func_077DD0(a, s, 0, 0, 0, 0, 0, 1, s->f14, s->f18, s->f1C, s->f20);
                {int *fl = &a->flags; *fl = *fl | 0x20;}
                e->fA0 = D_001C73B8;
                e->fA4 = func_17E7E0(0) + 0.5f;
            }
        }
    }
    a->state = y;
}
