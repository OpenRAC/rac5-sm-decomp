/* LEVEL_03:0x161FB8 -- fills a local record, looks up a value through the owner and returns a flag. */

extern void func_01A0B0(void *p);
extern int func_084588(void *a0, void *a1);
extern int func_1623E8(void *a0);

int func_161FB8(char *a0)
{
    int buf[4];
    char *s;
    int r;

    s = *(char **)(a0 + 0x54);
    func_01A0B0(buf);
    r = func_084588(*(void **)(s + 0x38), buf);
    if (r == 0) {
        return 1;
    }
    return func_1623E8(a0) == 0;
}
