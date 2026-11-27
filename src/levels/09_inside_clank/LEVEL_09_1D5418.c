/* LEVEL_09:0x1D5418 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_00380740;
extern char D_00380730[];
extern char D_00380748[];

char *func_1D5418(void) {
    if (D_00380740 == 0) {
        D_00380740 = 1;
        memset((unsigned char *)D_00380730, 0, 16);
        *(char **)(D_00380730 + 4) = D_00380748;
    }
    return D_00380730;
}
