/* LEVEL_16:0x161448 -- latches a flag in a timing window and dispatches an update. */
typedef struct Priv {
    char pad0[0xCC];
    unsigned char flag;
} Priv;

typedef struct Obj {
    char pad0[0x45];
    unsigned char kind;
    char pad46[0x12];
    Priv *priv;
} Obj;

extern float func_06FB28(Obj *o);
extern int func_06FB50(Obj *o, int a);
extern int func_161528(Obj *o);
extern int func_160C70(Obj *o);
extern void func_160758(Obj *o, int kind, int mode);

void func_161448(Obj *o)
{
    Priv *p;
    float t;
    int r;

    p = o->priv;
    t = func_06FB28(o);
    if (p->flag == 0) {
        if (t >= 1.4666666984558105f && t < 1.7666666507720947f) {
            if (func_161528(o) != 0) {
                p->flag = 1;
            }
        }
    }
    if (func_06FB50(o, 0) != 0) {
        r = func_160C70(o);
        if (r == 3) {
            func_160758(o, o->kind, 4);
        } else {
            func_160758(o, o->kind, r & 0xFF);
        }
    }
}
