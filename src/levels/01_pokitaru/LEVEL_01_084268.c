/* LEVEL_01:0x084268 -- resets the draw state, submits every entry of the global table and restores the clamp mode. */
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

extern unsigned int D_001F622C;
extern struct Entry D_0023ADC0[];
extern DbDlist db_dlist;
extern void func_0A2558(int a);
extern void func_0A2110(int a, int b);
extern void func_0A2468(int a);
extern void func_085580(int a, int b, int c, float f);
extern void dlib_displist_set_tex_clamp(void *d, int a, int b) __asm__("dlib_displist_set_tex_clamp__FP13DLIB_DISPLISTbT1");

void func_084268(void)
{
    unsigned int i;

    func_0A2558(0);
    func_0A2110(1, 2);
    func_0A2468(0);
    for (i = 0; i < D_001F622C; i++) {
        func_085580(D_0023ADC0[i].a, D_0023ADC0[i].b, D_0023ADC0[i].c, D_0023ADC0[i].f);
    }
    func_0A2468(1);
    dlib_displist_set_tex_clamp(db_dlist.list, 0, 0);
}
