/* LEVEL_08:0x21D890 -- takes a float, runs two helpers on a fixed object with the value, passes the second result on, then bumps a counter in a region of a global block. */

extern unsigned char D_00279E70[];
extern unsigned char *D_0023CB2C;

unsigned int func_018A20(void);
int func_21D758(unsigned char *p, int n, unsigned int r, float f);
void func_088C48(int v);

void func_21D890(float f)
{
    unsigned char *p;
    unsigned int r;
    int ret;
    unsigned char *base;

    p = D_00279E70;
    r = func_018A20();
    ret = func_21D758(p, 5, r, f);
    func_088C48(ret);
    base = D_0023CB2C + 0x10000;
    *(int *)(base + 0x372C) = *(int *)(base + 0x372C) + 1;
}
