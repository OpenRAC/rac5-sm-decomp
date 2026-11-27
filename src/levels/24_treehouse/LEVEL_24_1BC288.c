/* LEVEL_24:0x1BC288 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_00362C80;
extern char D_00362C70[];
extern char D_00362C88[];

char *func_1BC288(void) {
    if (D_00362C80 == 0) {
        D_00362C80 = 1;
        memset((unsigned char *)D_00362C70, 0, 16);
        *(char **)(D_00362C70 + 4) = D_00362C88;
    }
    return D_00362C70;
}
