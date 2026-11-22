/* LEVEL_18:0x17D808 -- companion follower update: while idle scans the two player slots for one in the matching state and, when found, binds to it (copying its transform); while bound drops the link when the player leaves that state. */
typedef struct {
    float m[16];
} Mat;

typedef struct Obj Obj;

typedef struct {
    Obj *player_00;
} Ext;

struct Obj {
    Mat xf;
    char pad_40[0x45 - 0x40];
    unsigned char state_45;
    char pad_46[0x58 - 0x46];
    Ext *ext_58;
};

typedef struct {
    char pad_00[0xF4];
    int w_F4;
    char pad_F8[8];
    unsigned short st_100;
} Player;

extern Player *func_111AA0(unsigned int i);
extern int func_1134D0(Player *p);
extern void func_036608(Player *p);
extern Obj *func_000E40(void);
extern void func_0013A8(float f, int a, char *b, Obj *o, Obj *src, char *tab);
extern void func_1156D8(int v);
extern void func_17D9E8(Obj *o);
extern char D_00000FD8[];
extern char D_002E5AC8[];

static __inline__ void CopyMat(Mat *d, Mat *s)
{
    d->m[8] = s->m[8];
    d->m[9] = s->m[9];
    d->m[10] = s->m[10];
    d->m[11] = s->m[11];
    d->m[0] = s->m[0];
    d->m[1] = s->m[1];
    d->m[2] = s->m[2];
    d->m[3] = s->m[3];
    d->m[4] = s->m[4];
    d->m[5] = s->m[5];
    d->m[6] = s->m[6];
    d->m[7] = s->m[7];
    d->m[12] = s->m[12];
    d->m[13] = s->m[13];
    d->m[14] = s->m[14];
    d->m[15] = s->m[15];
}

void func_17D808(Obj *o)
{
    unsigned int i;
    Player *p;
    Obj *src;
    Player *q;

    if (o->state_45 == 0) {
        i = 0;
        do {
            p = func_111AA0(i);
            if (p != 0 && (unsigned short)(p->st_100 - 0x2C) < 2 && func_1134D0(p) == 0) {
                o->state_45 = 1;
                func_036608(p);
                src = func_000E40();
                func_0013A8(-0.10000001f, 0, D_00000FD8, o, src, D_002E5AC8);
                func_1156D8(p->w_F4 - 1);
                CopyMat(&o->xf, &src->xf);
                o->ext_58->player_00 = (Obj *)p;
                func_17D9E8(o);
            }
            i++;
        } while (i < 2);
    } else if (o->state_45 == 1) {
        q = (Player *)o->ext_58->player_00;
        if ((unsigned short)(q->st_100 - 0x2C) >= 2 && func_1134D0(q) == 0) {
            o->state_45 = 0;
        } else {
            func_17D9E8(o);
            func_1156D8(q->w_F4 - 1);
        }
    }
}
