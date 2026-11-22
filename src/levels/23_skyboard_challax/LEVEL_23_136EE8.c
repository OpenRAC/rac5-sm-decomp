/* LEVEL_23:0x136EE8 -- placement copy of LEVEL_03_141440.c: counts down the object's message timer and shows its message, or stops it when the timer has run out. */

struct Msg141440 {
    int w0;
    float timer;
    char pad8[8];
    unsigned char kind;
};

struct Obj141440 {
    char pad0[0x45];
    unsigned char state;
    char pad46[0xE];
    int w54;
    struct Msg141440 *msg;
};

extern char D_00362E60[];

extern int sprintf(char *dst, const char *fmt, ...);
extern char *func_123C28(int id);
extern void func_0AC270(int a, char *s, int b, int c);

void func_136EE8(struct Obj141440 *o)
{
    struct Msg141440 *m;

    m = o->msg;
    if (o->w54 != 0 && m != 0 && o->state == 1 && m->kind != 0) {
        if (m->timer <= 0.0f) {
            m->kind = 0;
            m->w0 = 0;
            return;
        }
        switch (m->kind) {
        case 1:
            func_0AC270(0, func_123C28(0x207), 0, 0);
            break;
        case 2:
            sprintf(D_00362E60, func_123C28(0x3F3), func_123C28(0x70));
            func_0AC270(0, D_00362E60, 0, 0);
            break;
        }
        m->timer = m->timer - 1.0f;
    }
}
