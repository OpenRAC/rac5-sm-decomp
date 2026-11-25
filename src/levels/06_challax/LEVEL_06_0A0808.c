/* LEVEL_06:0x0A0808 -- placement copy of LEVEL_01_0A6038.c: placement copy of FRONTEND_00AA68.c: looks the n-th slot of the global table up. */
extern char D_0029D110[];

extern int func_0A08E0(void *);

int func_0A0808(int a)
{
    return func_0A08E0(&D_0029D110[0x30C8 + a * 0x18]);
}
