/* LEVEL_15:0x069330 -- placement copy of LEVEL_01_084268.c: resets the draw state, submits every entry of the global table and restores the clamp mode. */
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

extern unsigned int D_0014AEAC;
extern struct Entry D_00182E30[];
extern DbDlist db_dlist;
extern void func_082E50(int a);
extern void func_082A08(int a, int b);
extern void func_082D60(int a);
extern void func_069C60(int a, int b, int c, float f);
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_069330(void)
{
    unsigned int i;

    func_082E50(0);
    func_082A08(1, 2);
    func_082D60(0);
    for (i = 0; i < D_0014AEAC; i++) {
        func_069C60(D_00182E30[i].a, D_00182E30[i].b, D_00182E30[i].c, D_00182E30[i].f);
    }
    func_082D60(1);
    dlib_displist_set_tex_clamp(db_dlist.list, 0, 0);
}
