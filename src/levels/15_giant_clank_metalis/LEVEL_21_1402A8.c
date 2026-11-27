/* LEVEL_21:0x1402A8 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_002F5580;
extern char D_002F5570[];
extern char D_002F5588[];

char *func_1402A8(void) {
    if (D_002F5580 == 0) {
        D_002F5580 = 1;
        memset((unsigned char *)D_002F5570, 0, 16);
        *(char **)(D_002F5570 + 4) = D_002F5588;
    }
    return D_002F5570;
}
