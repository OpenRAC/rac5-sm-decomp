/* LEVEL_16:0x11C2E0 -- one setup helper, clears a flag word and two tables, then runs a two-step helper loop. */

extern int D_001B8518;
extern unsigned char D_002E1110[];
extern unsigned char D_002E1090[];

int func_0A50B0(int a);
int func_0B9828(int a);
void func_0B93E0(int a);
void *memset(void *s, int c, unsigned int n);

void func_11C2E0(void)
{
    int i;

    func_0A50B0(6);
    D_001B8518 = 0;
    memset(D_002E1110, 0, 0x300);
    memset(D_002E1090, 0, 0x80);
    i = 0;
    do {
        func_0B9828(i);
        i++;
        func_0B93E0(20);
    } while (i < 2);
}
