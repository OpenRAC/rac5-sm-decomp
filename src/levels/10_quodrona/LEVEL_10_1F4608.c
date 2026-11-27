/* LEVEL_10:0x1F4608 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_003A2680;
extern char D_003A2670[];
extern char D_003A2688[];

char *func_1F4608(void) {
    if (D_003A2680 == 0) {
        D_003A2680 = 1;
        memset((unsigned char *)D_003A2670, 0, 16);
        *(char **)(D_003A2670 + 4) = D_003A2688;
    }
    return D_003A2670;
}
