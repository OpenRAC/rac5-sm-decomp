/* LEVEL_22:0x14A968 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_002E88C0;
extern char D_002E88B0[];
extern char D_002E88C8[];

char *func_14A968(void) {
    if (D_002E88C0 == 0) {
        D_002E88C0 = 1;
        memset((unsigned char *)D_002E88B0, 0, 16);
        *(char **)(D_002E88B0 + 4) = D_002E88C8;
    }
    return D_002E88B0;
}
