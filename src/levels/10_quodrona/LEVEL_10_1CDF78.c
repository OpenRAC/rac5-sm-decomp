/* LEVEL_10:0x1CDF78 -- state handler of an object with a linked record: state 1 runs the record's step and, when it succeeds, finishes it and clears the state; state 2 runs the record's second step. */
struct Rec {
    char pad00[0xCC];
    int fCC;
};

struct Obj {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x12];
    struct Rec *f58;
};

extern int D_00233530;

extern int func_12E058(struct Rec *r, struct Obj *o, int v, int *p);
extern void func_12DEB8(struct Rec *r);
extern void func_12D298(char *a0, struct Obj *o, int v, int a3, int t0);

void func_1CDF78(struct Obj *o)
{
    struct Rec *r = o->f58;

    switch (o->b45) {
    case 1:
        if (func_12E058(r, o, r->fCC, &D_00233530) != 0) {
            func_12DEB8(r);
            o->b45 = 0;
        }
        break;
    case 2:
        func_12D298((char *)r + 0xC4, o, r->fCC, 0, 0);
        break;
    }
}
