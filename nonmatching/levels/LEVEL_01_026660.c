/* USA LEVEL_01:026660, 260-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Byte-exact in an isolated link; local declarations still conflict with accepted definitions or
 * callers. No matching credit.
 * Remaining issue: draft re-tried exact; CONFLICT: accepted caller LEVEL_01_026768 declares
 * func_026660(long long, long long, int, long long x5); the definition needs char* /int params
 * (long long params add dsll32/dsra32 truncations, 304 B), so the caller declaration should
 * become (char *, int, int, int, int, int, int, int)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_01:0x026660 -- queues a load request when none is pending: copies the name into the request buffer, stores the six request parameters and clears two result bytes. */
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
