/* LEVEL_17:0x11BC58 -- placement copy of LEVEL_16_11C2E0.c: one setup helper, clears a flag word and two tables, then runs a two-step helper loop. */

extern int D_001ABB10;
extern unsigned char D_002D2410[];
extern unsigned char D_002D2390[];

int func_0A4590(int a);
int func_0B8D68(int a);
void func_0B8920(int a);
void *memset(void *s, int c, unsigned int n);

void func_11BC58(void)
{
    int i;

    func_0A4590(6);
    D_001ABB10 = 0;
    memset(D_002D2410, 0, 0x300);
    memset(D_002D2390, 0, 0x80);
    i = 0;
    do {
        func_0B8D68(i);
        i++;
        func_0B8920(20);
    } while (i < 2);
}
