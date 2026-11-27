/* LEVEL_20:0x0F9780 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_00206240;
extern char D_00206230[];
extern char D_00206248[];

char *func_0F9780(void) {
    if (D_00206240 == 0) {
        D_00206240 = 1;
        memset((unsigned char *)D_00206230, 0, 16);
        *(char **)(D_00206230 + 4) = D_00206248;
    }
    return D_00206230;
}
