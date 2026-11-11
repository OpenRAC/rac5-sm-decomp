/* LEVEL_15:0x134E20 -- initializes a local buffer through two helpers, then makes one pass over a table of 0x64-byte records paired with 0x50-byte records, and calls a final helper. */

extern char D_0015DFF8[];
extern char D_00171C00[];
extern char D_002F5124[];

void func_1248B0(char *a0);
void func_029480(char *a0, unsigned int a1, unsigned int a2, int a3);
void func_029468(char *a0);
void func_121448(char *a0, int a1, char *a2, char *a3);
void func_134D00(void);

void func_134E20(void)
{
    char buf[0x20];
    char *s0;
    char *s1;
    char *s2;
    char *s3;

    func_1248B0(D_0015DFF8);
    func_029480(buf, 0xFFFFFFFFu, 0xFFFFFFFFu, 0);
    func_029468(buf);
    s0 = D_00171C00;
    s2 = D_002F5124;
    s3 = s0;
    s1 = s0 + 8;
    do {
        func_121448(s2, *(int *)s0, buf, s1);
        s0 += 0x64;
        s1 += 0x64;
        s2 += 0x50;
    } while (s0 == s3);
    func_134D00();
}
