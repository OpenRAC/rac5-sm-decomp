/* LEVEL_01:0x0758B0 -- calls a probe on a sub-record and then on the record itself, running the matching action after each non-zero probe. */

int func_097208(unsigned char *p);
void func_097620(unsigned char *p);

void func_0758B0(unsigned char *o)
{
    if (func_097208(o + 0x48)) {
        func_097620(o + 0x48);
    }
    if (func_097208(o)) {
        func_097620(o);
    }
}
