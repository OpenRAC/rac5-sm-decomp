/* LEVEL_19:0x198218 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_002E63C0;
extern char D_002E63B0[];
extern char D_002E63C8[];

char *func_198218(void) {
    if (D_002E63C0 == 0) {
        D_002E63C0 = 1;
        memset((unsigned char *)D_002E63B0, 0, 16);
        *(char **)(D_002E63B0 + 4) = D_002E63C8;
    }
    return D_002E63B0;
}
