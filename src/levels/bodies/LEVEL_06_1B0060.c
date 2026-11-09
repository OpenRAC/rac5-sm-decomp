/* LEVEL_06:0x1B0060 -- placement copy of LEVEL_03_161FB8.c: fills a local record, looks up a value through the owner and returns a flag. */

extern void func_018B30(void *p);
extern int func_07D818(void *a0, void *a1);
extern int func_1AF850(void *a0);

int func_1B0060(char *a0)
{
    int buf[4];
    char *s;
    int r;

    s = *(char **)(a0 + 0x54);
    func_018B30(buf);
    r = func_07D818(*(void **)(s + 0x38), buf);
    if (r == 0) {
        return 1;
    }
    return func_1AF850(a0) == 0;
}
