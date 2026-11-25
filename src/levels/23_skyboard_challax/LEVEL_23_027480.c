/* LEVEL_23:0x027480 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_0271B8(void);
extern int ps2fioClose(int);
extern int D_001FE418[];
extern int D_001FE618[];
extern unsigned int D_001C7734;
extern unsigned int D_001C7738;

void func_027480(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_0271B8)(1);
    n = D_001C7734;
    for (i = 0; i != n; i++) {
        handles[i] = D_001FE418[i];
        D_001FE418[i] = -1;
    }
    D_001C7734 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_001C7738;
    for (i = 0; i != n; i++) {
        handles[i] = D_001FE618[i];
        D_001FE618[i] = -1;
    }
    D_001C7738 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
