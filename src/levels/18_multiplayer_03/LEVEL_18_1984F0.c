/* LEVEL_18:0x1984F0 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_002E6180;
extern char D_002E6170[];
extern char D_002E6188[];

char *func_1984F0(void) {
    if (D_002E6180 == 0) {
        D_002E6180 = 1;
        memset((unsigned char *)D_002E6170, 0, 16);
        *(char **)(D_002E6170 + 4) = D_002E6188;
    }
    return D_002E6170;
}
