/* FRONTEND:0x007080 -- when the loaded screen matrix is 5, appends a 16-byte tag and a small packet header. */
struct Pk16 {
    char b[16];
};

struct Ctx {
    int w_00;
    unsigned int *p_04;
    struct Pk16 *p_08;
};

struct DbDlist {
    char pad_00[0x54];
    struct Ctx *p_54;
};

extern int g_CurLoadedScreenMatrix;
extern struct DbDlist db_dlist;
extern struct Pk16 g_cntTag;
extern void *func_005FA0(void);
extern void func_006E68(int a0, void *a1);

void SYSTEM_ThroughmodeMatrixIsDirty__Fv(void)
{
    struct Ctx *c;
    struct Pk16 *src;
    unsigned int *w;
    unsigned int hdr;
    unsigned short one;
    void *res;

    if (g_CurLoadedScreenMatrix != 5) {
        return;
    }
    res = func_005FA0();
    if (res == 0) {
        return;
    }
    src = &g_cntTag;
    hdr = 0x13000000;
    one = 1;
    c = db_dlist.p_54;
    *c->p_08 = *src;
    w = c->p_04;
    w[0] = 0;
    w[1] = 0;
    w[2] = 0;
    w[3] = hdr;
    c->p_04 = (unsigned int *)((char *)c->p_04 + 0x10);
    *(unsigned short *)c->p_08 = one;
    c->p_08 = (struct Pk16 *)c->p_04;
    c->p_04 = (unsigned int *)((char *)c->p_04 + 0x10);
    func_006E68(4, res);
}
