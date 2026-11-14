/* LEVEL_10:0x1C90A8 -- placement copy of LEVEL_01_1C56C8.c: runs the resource helper over both handle words of each of the five table entries. */
typedef struct E { char pad00[0x18]; int a; int b; } E;
extern E D_00211CE8[5];
extern int func_127EC8(int a);
void func_1C90A8(void)
{
    E *p = D_00211CE8;
    unsigned int i;
    for (i = 0; i < 5; i++) {
        if (p->a != 0) p->a = func_127EC8(p->a);
        if (p->b != 0) p->b = func_127EC8(p->b);
        p++;
    }
}
