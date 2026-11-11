/* LEVEL_16:0x18C8C0 -- forwards its two arguments to the shared helper with one of two tables chosen by the third argument. */
extern int D_001BE59C;
extern char D_001BE5B0[];
extern char D_001BE650[];
extern char D_001BE670[];
extern void func_18C2F8(int a0, int a1, int a2, char *a3, char *t0);

void func_18C8C0(int a1, int a2, int sel)
{
    if (sel != 0) {
        func_18C2F8(D_001BE59C, a1, a2, D_001BE670, D_001BE5B0);
    } else {
        func_18C2F8(D_001BE59C, a1, a2, D_001BE650, D_001BE5B0);
    }
}
