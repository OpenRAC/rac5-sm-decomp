/* LEVEL_05:0x1DA9A8 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_00390300;
extern char D_003902F0[];
extern char D_00390308[];

char *func_1DA9A8(void) {
    if (D_00390300 == 0) {
        D_00390300 = 1;
        memset((unsigned char *)D_003902F0, 0, 16);
        *(char **)(D_003902F0 + 4) = D_00390308;
    }
    return D_003902F0;
}
