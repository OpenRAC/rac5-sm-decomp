/* LEVEL_02:0x200248 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_003B0EC0;
extern char D_003B0EB0[];
extern char D_003B0EC8[];

char *func_200248(void) {
    if (D_003B0EC0 == 0) {
        D_003B0EC0 = 1;
        memset((unsigned char *)D_003B0EB0, 0, 16);
        *(char **)(D_003B0EB0 + 4) = D_003B0EC8;
    }
    return D_003B0EB0;
}
