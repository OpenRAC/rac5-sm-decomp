/* LEVEL_19:0x15BBC8 -- gated setup: when a float field is positive, runs a lookup and two follow-up calls on a sub-record. */

struct Obj15BBC8 {
    char pad_00[0x34];
    float f_34;
    char pad_38[0x20];
    char *p_58;
};

struct Rec15BBC8 {
    char pad_00[0x98];
    char *p_98;
    char pad_9C[0x4];
    char *p_A0;
    char pad_A4[0x4];
    unsigned char b_A8;
};

int func_06F9A8(struct Obj15BBC8 *o, int a);
int func_15D040(char *a, int b);
int func_15B170(struct Obj15BBC8 *o, int a, int b);
unsigned char func_15D0C0(char *a);

int func_15BBC8(struct Obj15BBC8 *o)
{
    struct Rec15BBC8 *q;
    int r;

    q = (struct Rec15BBC8 *)o->p_58;
    if (o->f_34 <= 0.0f) {
        func_06F9A8(o, 1);
        return 0;
    }
    r = func_15D040((char *)o + 0x30, *(int *)(q->p_A0 + 0xFC));
    q->p_98 = (char *)r;
    if (r != 0) {
        func_15B170(o, 6, 0);
        q->b_A8 = func_15D0C0(q->p_98);
        return 1;
    }
    return 0;
}
