/* LEVEL_08:0x1F8E68 -- placement copy of LEVEL_01_1C56C8.c: runs the resource helper over both handle words of each of the five table entries. */
typedef struct E { char pad00[0x18]; int a; int b; } E;
extern E D_00252798[5];
extern int func_13B5A0(int a);
void func_1F8E68(void)
{
    E *p = D_00252798;
    unsigned int i;
    for (i = 0; i < 5; i++) {
        if (p->a != 0) p->a = func_13B5A0(p->a);
        if (p->b != 0) p->b = func_13B5A0(p->b);
        p++;
    }
}
