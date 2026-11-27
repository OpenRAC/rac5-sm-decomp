/* LEVEL_23:0x07AAB8 -- placement copy of LEVEL_01_084268.c: resets the draw state, submits every entry of the global table and restores the clamp mode. */
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

extern unsigned int D_001C962C;
extern struct Entry D_0020C240[];
extern DbDlist db_dlist;
extern void func_099298(int a);
extern void func_098E50(int a, int b);
extern void func_0991A8(int a);
extern void func_07B440(int a, int b, int c, float f);
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_07AAB8(void)
{
    unsigned int i;

    func_099298(0);
    func_098E50(1, 2);
    func_0991A8(0);
    for (i = 0; i < D_001C962C; i++) {
        func_07B440(D_0020C240[i].a, D_0020C240[i].b, D_0020C240[i].c, D_0020C240[i].f);
    }
    func_0991A8(1);
    dlib_displist_set_tex_clamp(db_dlist.list, 0, 0);
}
