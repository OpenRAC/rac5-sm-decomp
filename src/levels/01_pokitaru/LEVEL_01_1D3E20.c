/* LEVEL_01:0x1D3E20 -- clears the shared header, then for each of the six global slots runs the two release steps and does the same for the focus item when its meta word matches. */
typedef struct Hdr { int w0; unsigned char b4; unsigned char b5; } Hdr;
typedef struct Meta { char pad00[0x24]; unsigned int w24; } Meta;
typedef struct Item { char pad00[0x40]; Meta *f40; } Item;
typedef struct Glob { char pad00[0x5A4]; Item *f5A4; int pad5A8[4]; int slot[6]; } Glob;
extern Hdr D_00398BF0;
extern char D_00235140[];
extern int func_079BD0(int o);
extern void func_079C18(int wanted);
void func_1D3E20(void)
{
    Glob *g = (Glob *)D_00235140;
    unsigned int i;
    int *p;
    p = g->slot;
    D_00398BF0.b5 = 0;
    D_00398BF0.b4 = 0;
    D_00398BF0.w0 = 0;
    for (i = 0; i < 6; i++) {
        if (*p != 0) {
            func_079BD0(*p);
            func_079C18(*p);
        }
        p++;
    }
    if (g->f5A4 != 0) {
        if (g->f5A4->f40->w24 == 0x9707D8E6u) {
            func_079BD0((int)g->f5A4);
            func_079C18((int)g->f5A4);
        }
    }
}
