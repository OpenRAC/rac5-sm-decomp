/* LEVEL_23:0x1BE9F0 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_00366D80;
extern char D_00366D70[];
extern char D_00366D88[];

char *func_1BE9F0(void) {
    if (D_00366D80 == 0) {
        D_00366D80 = 1;
        memset((unsigned char *)D_00366D70, 0, 16);
        *(char **)(D_00366D70 + 4) = D_00366D88;
    }
    return D_00366D70;
}
