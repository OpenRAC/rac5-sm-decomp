/* LEVEL_08.REL:0x21D890: reviewed 108-byte candidate, held for ABI review.
 * Takes a float, runs two helpers on a fixed object with the value, passes the
 * second result on, then bumps a counter in a region of a global block.
 * pinned C with gnu-ee-trial links 108/108 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_088C48 returning void with (int), but the accepted
 * LEVEL_08_088C48.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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
