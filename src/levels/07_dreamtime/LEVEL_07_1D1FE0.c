/* LEVEL_07:0x1D1FE0 -- placement copy of LEVEL_01_1C56C8.c: runs the resource helper over both handle words of each of the five table entries. */
typedef struct E { char pad00[0x18]; int a; int b; } E;
extern E D_0021DB40[5];
extern int func_12D068(int a);
void func_1D1FE0(void)
{
    E *p = D_0021DB40;
    unsigned int i;
    for (i = 0; i < 5; i++) {
        if (p->a != 0) p->a = func_12D068(p->a);
        if (p->b != 0) p->b = func_12D068(p->b);
        p++;
    }
}
