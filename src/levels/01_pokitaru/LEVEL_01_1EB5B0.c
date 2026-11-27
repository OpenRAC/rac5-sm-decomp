/* LEVEL_01:0x1EB5B0 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_00398F40;
extern char D_00398F30[];
extern char D_00398F48[];

char *func_1EB5B0(void) {
    if (D_00398F40 == 0) {
        D_00398F40 = 1;
        memset((unsigned char *)D_00398F30, 0, 16);
        *(char **)(D_00398F30 + 4) = D_00398F48;
    }
    return D_00398F30;
}
