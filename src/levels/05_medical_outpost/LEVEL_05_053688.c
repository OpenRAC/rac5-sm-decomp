/* LEVEL_05:0x053688 -- placement copy of LEVEL_01_055AB0.c: reacts to the current state pair of an object by changing its mode and clearing a linked flag. */
typedef struct { char pad[0x45]; unsigned char k; } W;
typedef struct {
    char pad0[0x108];
    unsigned short s108;
    char pad10A[0x262];
    int i36C;
    char pad370[0x18];
    int i388;
    char pad38C[0x218];
    W *w;
    char pad5A8[0x3F8];
    int i9A0;
    char pad9A4[0x29];
    unsigned char b9CD;
    char pad9CE[0x29E];
    int iC6C;
} O;

extern int func_022AD0(O *o);
extern int func_022B08(O *o);
extern void func_068C40(O *o, int a, int b, int c);

void func_053688(O *o)
{
    long long flag;
    int t;
    int a, b;
    W *w;

    if (o->w == 0)
        return;
    flag = 0;
    if (o->b9CD != 0) {
        t = o->i9A0 != 1;
        flag = t;
    }
    if ((flag & 0xFF) == 0)
        return;
    a = func_022AD0(o);
    b = func_022B08(o);
    if (a == 2 && b == 4) {
        if (o->s108 == 1) {
            if (o->i36C == 0x1A)
                o->iC6C = 6;
            else
                func_068C40(o, 0x19, 0, o->i388);
        } else {
            o->iC6C = 6;
        }
        w = o->w;
        if (w != 0) {
            if (w->k >= 4) {
                if (w->k < 0xFE)
                    w->k = 0;
            }
        }
    } else if (a == 6 && b == 0xB) {
        o->iC6C = 0xA;
    }
}
