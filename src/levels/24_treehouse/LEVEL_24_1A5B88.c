/* LEVEL_24:0x1A5B88 -- placement copy of LEVEL_01_1D3E20.c: clears the shared header, then for each of the six global slots runs the two release steps and does the same for the focus item when its meta word matches. */
typedef struct Hdr { int w0; unsigned char b4; unsigned char b5; } Hdr;
typedef struct Meta { char pad00[0x24]; unsigned int w24; } Meta;
typedef struct Item { char pad00[0x40]; Meta *f40; } Item;
typedef struct Glob { char pad00[0x5A4]; Item *f5A4; int pad5A8[4]; int slot[6]; } Glob;
extern Hdr D_00362940;
extern char D_00201040[];
extern int func_074338(int o);
extern void func_074380(int wanted);
void func_1A5B88(void)
{
    Glob *g = (Glob *)D_00201040;
    unsigned int i;
    int *p;
    p = g->slot;
    D_00362940.b5 = 0;
    D_00362940.b4 = 0;
    D_00362940.w0 = 0;
    for (i = 0; i < 6; i++) {
        if (*p != 0) {
            func_074338(*p);
            func_074380(*p);
        }
        p++;
    }
    if (g->f5A4 != 0) {
        if (g->f5A4->f40->w24 == 0x9707D8E6u) {
            func_074338((int)g->f5A4);
            func_074380((int)g->f5A4);
        }
    }
}
