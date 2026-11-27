/* LEVEL_16:0x197050 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_002E6200;
extern char D_002E61F0[];
extern char D_002E6208[];

char *func_197050(void) {
    if (D_002E6200 == 0) {
        D_002E6200 = 1;
        memset((unsigned char *)D_002E61F0, 0, 16);
        *(char **)(D_002E61F0 + 4) = D_002E6208;
    }
    return D_002E61F0;
}
