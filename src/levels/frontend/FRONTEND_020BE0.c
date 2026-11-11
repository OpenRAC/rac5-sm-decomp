/* FRONTEND:0x020BE0 -- queries a handle, and when it is valid forwards it with two table values to a memory-card helper. */

extern char *D_00027E9C;
extern int func_021168(void);
extern int func_003918(void);
extern void MEMCARD_SetHeaderDetail__FUiUiUiUiUi(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);

void func_020BE0(void)
{
    int s0;
    int v;
    char *g;

    s0 = func_021168();
    if (s0 < 0) {
        return;
    }
    v = func_003918();
    g = D_00027E9C;
    MEMCARD_SetHeaderDetail__FUiUiUiUiUi(s0, *(unsigned int *)(g + 0x1C68), v, *(unsigned int *)(g + 0x13F40), 1);
}
