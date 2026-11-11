/* FRONTEND:0x007130 -- when the loaded screen matrix is 4, appends a 16-byte tag and a small packet header, then hands the helper 4 and the checked result. */
struct Pk16 {
    char b[16];
};

struct Ctx {
    char pad_00[4];
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
extern void func_006E68(int a, void *b);

void func_007130(void)
{
    struct Ctx *c;
    unsigned int *w;
    void *r;

    if (g_CurLoadedScreenMatrix != 4) {
        return;
    }
    r = func_005FA0();
    if (r == 0) {
        return;
    }
    c = db_dlist.p_54;
    *c->p_08 = g_cntTag;
    w = c->p_04;
    w[3] = 0x13000000;
    w[1] = 0;
    w[2] = 0;
    w[0] = 0;
    c->p_04 = (unsigned int *)((char *)c->p_04 + 0x10);
    *(unsigned short *)c->p_08 = 1;
    c->p_08 = (struct Pk16 *)c->p_04;
    c->p_04 = (unsigned int *)((char *)c->p_04 + 0x10);
    func_006E68(4, r);
}
