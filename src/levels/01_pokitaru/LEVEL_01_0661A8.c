/* LEVEL_01:0x0661A8 -- lazily opens the stream, releases the old one and
   re-arms the object: the timer at +0xFC4 drops to 1/15 s and the two flags
   at +0x9CF and +0xBCB are set. */
typedef struct {
    char pad_0000[0x5AC];
    void *f_5AC;
    char pad_05B0[0x41F];
    unsigned char f_9CF;
    char pad_09D0[0x1BC];
    void *f_B8C;
    char pad_0B90[0x3B];
    unsigned char f_BCB;
    char pad_0BCC[0x3F8];
    float f_FC4;
} Obj;

extern void *func_065C38(void *p, int a);
extern void func_17BCC8(void *p);
extern void func_0679E0(Obj *o);
extern void func_066348(Obj *o);
extern void func_066230(Obj *o);

void func_0661A8(Obj *a0)
{
    void *p;
    void *q;

    if (a0->f_B8C == 0) {
        p = func_065C38(a0, 0);
        a0->f_B8C = p;
        if (p == 0)
            return;
    }
    q = a0->f_5AC;
    if (q != 0)
        func_17BCC8(q);
    a0->f_BCB = 0;
    a0->f_9CF = 1;
    a0->f_FC4 = 0.06666667f;
    func_0679E0(a0);
    func_066348(a0);
    func_066230(a0);
}
