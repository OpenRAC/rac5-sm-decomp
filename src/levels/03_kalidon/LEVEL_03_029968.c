/* LEVEL_03:0x029968 -- placement copy of FRONTEND_002988.c: normalises a path string (case, slashes, prefix) into a bounded buffer. */
extern char D_00225CD8[];
extern char D_00225CE0[];
extern char D_00225CE8[];
extern char D_00225CF0[];
extern char D_00225CF8[];
extern char D_00225D18[];
extern char D_00225D20[];
extern char D_00225D40[];

extern char *strncpy(char *, const char *, unsigned);
extern int strncmp(const char *, const char *, unsigned);
extern int snprintf(char *, unsigned, const char *, ...);
extern void func_029958(char *);

int func_029968(char *dst, int size, char *src, int flag)
{
    char buf[256];
    char *p;
    char *r;
    char *w;
    char *tail;
    char *end;
    int n;
    int res;

    n = size - 1;
    strncpy(buf, src, 255);
    buf[255] = 0;
    if (strncmp(D_00225CD8, buf, 4) == 0)
        p = buf + 4;
    else
        p = strncmp(D_00225CE0, buf, 5) ? buf : buf + 5;
    end = dst + n;
    while (*p) {
        if ((unsigned char)(*p - 'a') < 26)
            *p = *p - 0x20;
        if (*p == 0x5C)
            *p = '/';
        p++;
    }
    r = buf;
    w = buf;
    while (*r) {
        char c;

        *w++ = *r;
        c = *r++;
        if (c == '/') {
            while (*r == '/')
                r++;
        }
    }
    *w = *r;
    res = 0;
    if (strncmp(D_00225CE8, buf, 6) == 0) {
        strncpy(dst, buf, n);
        *end = 0;
    } else if (strncmp(D_00225CF0, buf, 6) == 0) {
        res = 1;
        if (strncmp(D_00225CF8, buf, 0x1F) == 0) {
            res = 0;
            snprintf(dst, n, D_00225D18, D_00225D20, tail = buf + 0x1F);
            if (!flag)
                func_029958(tail);
            *end = 0;
        } else {
            strncpy(dst, buf, n);
            *end = 0;
        }
    } else if (strncmp(D_00225D40, buf, 0x19) == 0) {
        tail = buf + 0x19;
        if (!flag)
            func_029958(tail);
        snprintf(dst, n, D_00225D18, D_00225D20, tail);
        *end = 0;
    } else {
        if (!flag)
            func_029958(buf);
        snprintf(dst, n, D_00225D18, D_00225D20, buf);
        *end = 0;
    }
    return res;
}
