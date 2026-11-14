/* LEVEL_01:0x1C56C8 -- runs the resource helper over both handle words of each of the five table entries. */
typedef struct E { char pad00[0x18]; int a; int b; } E;
extern E D_00208EC8[5];
extern int func_12A068(int a);
void func_1C56C8(void)
{
    E *p = D_00208EC8;
    unsigned int i;
    for (i = 0; i < 5; i++) {
        if (p->a != 0) p->a = func_12A068(p->a);
        if (p->b != 0) p->b = func_12A068(p->b);
        p++;
    }
}
