/* LEVEL_03:0x203C40 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_003B40C0;
extern char D_003B40B0[];
extern char D_003B40C8[];

char *func_203C40(void) {
    if (D_003B40C0 == 0) {
        D_003B40C0 = 1;
        memset((unsigned char *)D_003B40B0, 0, 16);
        *(char **)(D_003B40B0 + 4) = D_003B40C8;
    }
    return D_003B40B0;
}
