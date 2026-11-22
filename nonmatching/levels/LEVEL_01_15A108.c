/* USA LEVEL_01.REL:0x15A108, 496-byte candidate (22 November 2026).
 * Measured gnu-ee-trial --flag=-fno-gcse: 11 differing words; first difference
 * at 0xBC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { char pad00[0x38]; int w38; char pad3C[4]; int w40; } Hdr;

typedef struct {
    char pad00[0x0C];
    float f0C;
} Sub;

typedef struct {
    char pad00[0x44];
    Sub sub;
    char pad50[0x74 - 0x44 - sizeof(Sub)];
    float f74;
    char pad78[0x80 - 0x78];
    unsigned char b80;
} State;

typedef struct {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x54 - 0x46];
    Hdr *hdr;
    State *state;
} Obj;

extern float D_0021EA18[];
extern float D_0021EA28[];

extern void func_07C670(char *o, int a);
extern void func_0170C0(char *o, int a, int b, int c);
extern void func_1CDBC8(Sub *s, Obj *o, int a, int b, int c, float x, float y);
extern void func_0146C0(Sub *s, Obj *o, int a, int b, int c);
extern void func_15C260(char *o, int a, int b);

int func_15A108(Obj *o, int st, unsigned int i, int p3, int p4, int p5, float dt)
{
    Hdr *h;
    State *s;
    float f;
    float zero;
    Sub *sub;

    h = o->hdr;
    s = o->state;
    if (h->w40 != 0) {
        return 1;
    }
    if ((unsigned int)(o->b45 - 0x19) < 2 && st != 7) {
        return 1;
    }
    if (st == 10) {
close:
        func_07C670((char *)o, 1);
        return 3;
    }
    if (st == 6) {
        if (0.0f < s->f74) {
            func_0170C0((char *)o, 1, h->w38, s->b80);
        }
    } else if (st == 7) {
        func_0170C0((char *)o, 0, h->w38, s->b80);
    }
    zero = 0.0f;
    f = s->f74 - dt;
    s->f74 = f;
    if (f <= zero) {
        if (st == 11) {
            goto close;
        }
        func_0170C0((char *)o, 0, h->w38, s->b80);
        func_1CDBC8(&s->sub, o, p3, p4, p5, D_0021EA18[i], D_0021EA28[i]);
        func_15C260((char *)o, o->b45, 0x19);
        return 3;
    }
    if (i != 0) {
        sub = &s->sub;
        func_0146C0(sub, o, p3, p4, p5);
        sub->f0C = zero;
    }
    func_15C260((char *)o, o->b45, 0x18);
    return 2;
}
