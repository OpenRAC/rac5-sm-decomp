/* LEVEL_10:0x084828 -- placement copy of LEVEL_01_084268.c: resets the draw state, submits every entry of the global table and restores the clamp mode. */
struct Entry {
    int a;
    int b;
    int c;
    float f;
};

typedef struct DbDlist {
    char pad00[0x54];
    void *list;
} DbDlist;

extern unsigned int D_001FF22C;
extern struct Entry D_002441C0[];
extern DbDlist db_dlist;
extern void func_0A3670(int a);
extern void func_0A3228(int a, int b);
extern void func_0A3580(int a);
extern void func_0858E8(int a, int b, int c, float f);
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_084828(void)
{
    unsigned int i;

    func_0A3670(0);
    func_0A3228(1, 2);
    func_0A3580(0);
    for (i = 0; i < D_001FF22C; i++) {
        func_0858E8(D_002441C0[i].a, D_002441C0[i].b, D_002441C0[i].c, D_002441C0[i].f);
    }
    func_0A3580(1);
    dlib_displist_set_tex_clamp(db_dlist.list, 0, 0);
}
