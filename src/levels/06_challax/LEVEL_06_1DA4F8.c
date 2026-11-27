/* LEVEL_06:0x1DA4F8 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_00385980;
extern char D_00385970[];
extern char D_00385988[];

char *func_1DA4F8(void) {
    if (D_00385980 == 0) {
        D_00385980 = 1;
        memset((unsigned char *)D_00385970, 0, 16);
        *(char **)(D_00385970 + 4) = D_00385988;
    }
    return D_00385970;
}
