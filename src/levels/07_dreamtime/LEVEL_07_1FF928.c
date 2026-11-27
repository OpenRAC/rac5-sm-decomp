/* LEVEL_07:0x1FF928 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_003AE940;
extern char D_003AE930[];
extern char D_003AE948[];

char *func_1FF928(void) {
    if (D_003AE940 == 0) {
        D_003AE940 = 1;
        memset((unsigned char *)D_003AE930, 0, 16);
        *(char **)(D_003AE930 + 4) = D_003AE948;
    }
    return D_003AE930;
}
