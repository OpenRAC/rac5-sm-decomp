int func_08A0C0(void *);
int func_089FB0(void *, int);

int MCPFONT_FontStringPixelLength__FPCc(void *p)
{
    int r;

    if (p == 0) {
        return 0;
    }
    r = func_08A0C0(p);
    return func_089FB0(p, r);
}
