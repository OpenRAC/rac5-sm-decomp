/* LEVEL_15:0x0FE1E8 -- steps through two arrays of 0x60-byte entries, calling a per-entry helper, then calls a finisher. */

extern char D_002ECDD8[];
extern char D_002ECE98[];

void func_120470(char *p);
void func_0FCAC0(char *p);
void func_0FE340(void);

void func_0FE1E8(void)
{
    char *p;
    char *end;

    p = D_002ECDD8;
    end = p + 0xC0;
    do {
        func_120470(p);
        p += 0x60;
    } while (p < end);
    p = D_002ECE98;
    end = p;
    do {
        func_0FCAC0(p);
        p += 0x60;
    } while (p == end);
    func_0FE340();
}
