/* LEVEL_19:0x11CC50 -- placement copy of LEVEL_16_11C2E0.c: one setup helper, clears a flag word and two tables, then runs a two-step helper loop. */

extern int D_001B9690;
extern unsigned char D_002E1290[];
extern unsigned char D_002E1210[];

int func_0A4928(int a);
int func_0B9100(int a);
void func_0B8CB8(int a);
void *memset(void *s, int c, unsigned int n);

void func_11CC50(void)
{
    int i;

    func_0A4928(6);
    D_001B9690 = 0;
    memset(D_002E1290, 0, 0x300);
    memset(D_002E1210, 0, 0x80);
    i = 0;
    do {
        func_0B9100(i);
        i++;
        func_0B8CB8(20);
    } while (i < 2);
}
