/* LEVEL_08:0x08C2E0 -- placement copy of LEVEL_01_084268.c: resets the draw state, submits every entry of the global table and restores the clamp mode. */
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

extern unsigned int D_0023F0EC;
extern struct Entry D_0028A050[];
extern DbDlist db_dlist;
extern void func_0ACE50(int a);
extern void func_0ACA08(int a, int b);
extern void func_0ACD60(int a);
extern void func_08D5D0(int a, int b, int c, float f);
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_08C2E0(void)
{
    unsigned int i;

    func_0ACE50(0);
    func_0ACA08(1, 2);
    func_0ACD60(0);
    for (i = 0; i < D_0023F0EC; i++) {
        func_08D5D0(D_0028A050[i].a, D_0028A050[i].b, D_0028A050[i].c, D_0028A050[i].f);
    }
    func_0ACD60(1);
    dlib_displist_set_tex_clamp(db_dlist.list, 0, 0);
}
