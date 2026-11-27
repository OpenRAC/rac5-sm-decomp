/* LEVEL_02:0x08AC18 -- placement copy of LEVEL_01_084268.c: resets the draw state, submits every entry of the global table and restores the clamp mode. */
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

extern unsigned int D_0020B1EC;
extern struct Entry D_002522D0[];
extern DbDlist db_dlist;
extern void func_0A8E68(int a);
extern void func_0A8A20(int a, int b);
extern void func_0A8D78(int a);
extern void func_08BEB0(int a, int b, int c, float f);
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_08AC18(void)
{
    unsigned int i;

    func_0A8E68(0);
    func_0A8A20(1, 2);
    func_0A8D78(0);
    for (i = 0; i < D_0020B1EC; i++) {
        func_08BEB0(D_002522D0[i].a, D_002522D0[i].b, D_002522D0[i].c, D_002522D0[i].f);
    }
    func_0A8D78(1);
    dlib_displist_set_tex_clamp(db_dlist.list, 0, 0);
}
