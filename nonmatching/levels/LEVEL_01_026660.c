/* USA LEVEL_01.REL:0x026660 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_026768.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern char *strncpy(char *dst, const char *src, unsigned int n);

extern unsigned char D_001F3ED0;
extern unsigned char D_001F3ED1;
extern unsigned char D_001F3ED2;
extern unsigned char D_001F3ED3;
extern unsigned char D_001F3ED4;
extern unsigned char D_001F3ED5;
extern unsigned char D_001F3EE5;
extern int D_001F3EEC;
extern int D_001F3F68;
extern int D_001F3F6C;
extern int D_001F3F70;
extern char D_0022FE60[];

void func_026660(char *name, int a, int b, int c, int d, int e, int f, int g)
{
    if (D_001F3ED0 == 0 && D_001F3ED1 == 0) {
        if (name != D_0022FE60) {
            strncpy(D_0022FE60, name, 0x5F);
            D_0022FE60[0x5F] = 0;
        }
        D_001F3ED3 = 0;
        D_001F3ED2 = a;
        D_001F3F68 = c;
        D_001F3F70 = e;
        D_001F3F6C = d;
        D_001F3EEC = f;
        D_001F3EE5 = 0;
        D_001F3ED4 = b;
        D_001F3ED5 = g;
        D_001F3ED0 = 1;
    }
}
