/* LEVEL_15:0x0FA640 -- resets entity list and clears flag in each record. */
struct S {
    char pad[0x44098];
    char *a;
    int an;
    char *b;
    int bn;
};
struct R { char pad[0x74]; int f; };
extern struct S D_002A8B58;
extern int D_002ECCF0;
extern void func_0F9C58(char *p);

void func_0FA640(void)
{
    int i;
    struct R *p;
    struct R *e;

    D_002ECCF0 = 0;
    for (i = 0; i < D_002A8B58.an; i++) {
        func_0F9C58(D_002A8B58.a + i * 0xF4);
    }
    p = (struct R *)D_002A8B58.b;
    e = p + D_002A8B58.bn;
    for (; p != e; p++) {
        p->f = 0;
    }
}
