/* LEVEL_18:0x11B2D0 -- placement copy of LEVEL_16_11C2E0.c: one setup helper, clears a flag word and two tables, then runs a two-step helper loop. */

extern int D_001B9998;
extern unsigned char D_002E1490[];
extern unsigned char D_002E1410[];

int func_0A40A8(int a);
int func_0B8800(int a);
void func_0B83B8(int a);
void *memset(void *s, int c, unsigned int n);

void func_11B2D0(void)
{
    int i;

    func_0A40A8(6);
    D_001B9998 = 0;
    memset(D_002E1490, 0, 0x300);
    memset(D_002E1410, 0, 0x80);
    i = 0;
    do {
        func_0B8800(i);
        i++;
        func_0B83B8(20);
    } while (i < 2);
}
