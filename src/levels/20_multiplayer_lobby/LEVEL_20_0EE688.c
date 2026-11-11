/* LEVEL_20:0x0EE688 -- placement copy of LEVEL_16_11C2E0.c: one setup helper, clears a flag word and two tables, then runs a two-step helper loop. */

extern int D_0011ABB8;
extern unsigned char D_00204668[];
extern unsigned char D_002045E8[];

int func_08F6B0(int a);
int func_0A3D58(int a);
void func_0A3910(int a);
void *memset(void *s, int c, unsigned int n);

void func_0EE688(void)
{
    int i;

    func_08F6B0(6);
    D_0011ABB8 = 0;
    memset(D_00204668, 0, 0x300);
    memset(D_002045E8, 0, 0x80);
    i = 0;
    do {
        func_0A3D58(i);
        i++;
        func_0A3910(20);
    } while (i < 2);
}
