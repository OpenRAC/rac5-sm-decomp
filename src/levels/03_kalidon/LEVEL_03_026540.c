/* LEVEL_03:0x026540 -- placement copy of LEVEL_01_026660.c: queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_0020C550;
extern unsigned char D_0020C551;
extern unsigned char D_0020C552;
extern unsigned char D_0020C553;
extern unsigned char D_0020C554;
extern unsigned char D_0020C555;
extern unsigned char D_0020C565;
extern int D_0020C56C;
extern int D_0020C5E8;
extern int D_0020C5EC;
extern int D_0020C5F0;
extern char D_0024ACE0[];

void func_026540(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_0020C550 == 0 && D_0020C551 == 0) {
        if (name != D_0024ACE0) {
            strncpy(D_0024ACE0, name, 0x5F);
            D_0024ACE0[0x5F] = 0;
        }
        D_0020C553 = 0;
        D_0020C552 = a;
        D_0020C5E8 = c;
        D_0020C5F0 = e;
        D_0020C5EC = d;
        D_0020C56C = f;
        D_0020C565 = 0;
        D_0020C554 = b;
        D_0020C555 = g;
        D_0020C550 = 1;
    }
}
