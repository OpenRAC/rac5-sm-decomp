/* LEVEL_17:0x17CDE0 -- placement copy of LEVEL_01_1D3E20.c: clears the shared header, then for each of the six global slots runs the two release steps and does the same for the focus item when its meta word matches. */
typedef struct Hdr { int w0; unsigned char b4; unsigned char b5; } Hdr;
typedef struct Meta { char pad00[0x24]; unsigned int w24; } Meta;
typedef struct Item { char pad00[0x40]; Meta *f40; } Item;
typedef struct Glob { char pad00[0x5A4]; Item *f5A4; int pad5A8[4]; int slot[6]; } Glob;
extern Hdr D_002D70E0;
extern char D_001D5390[];
extern int func_06B178(int o);
extern void func_06B1C0(int wanted);
void func_17CDE0(void)
{
    Glob *g = (Glob *)D_001D5390;
    unsigned int i;
    int *p;
    p = g->slot;
    D_002D70E0.b5 = 0;
    D_002D70E0.b4 = 0;
    D_002D70E0.w0 = 0;
    for (i = 0; i < 6; i++) {
        if (*p != 0) {
            func_06B178(*p);
            func_06B1C0(*p);
        }
        p++;
    }
    if (g->f5A4 != 0) {
        if (g->f5A4->f40->w24 == 0x9707D8E6u) {
            func_06B178((int)g->f5A4);
            func_06B1C0((int)g->f5A4);
        }
    }
}
