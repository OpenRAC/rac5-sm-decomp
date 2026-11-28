/* LEVEL_07:0x086360 -- placement copy of LEVEL_01_084268.c: resets the draw state, submits every entry of the global table and restores the clamp mode. */
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

extern unsigned int D_0020A52C;
extern struct Entry D_002506C0[];
extern DbDlist db_dlist;
extern void func_0A4558(int a);
extern void func_0A4110(int a, int b);
extern void func_0A4468(int a);
extern void func_087650(int a, int b, int c, float f);
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_086360(void)
{
    unsigned int i;

    func_0A4558(0);
    func_0A4110(1, 2);
    func_0A4468(0);
    for (i = 0; i < D_0020A52C; i++) {
        func_087650(D_002506C0[i].a, D_002506C0[i].b, D_002506C0[i].c, D_002506C0[i].f);
    }
    func_0A4468(1);
    dlib_displist_set_tex_clamp(db_dlist.list, 0, 0);
}
