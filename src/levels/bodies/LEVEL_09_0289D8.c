/* LEVEL_09:0x0289D8 -- placement copy of FRONTEND_002988.c: normalises a path string (case, slashes, prefix) into a bounded buffer. */
extern char D_001F69D8[];
extern char D_001F69E0[];
extern char D_001F69E8[];
extern char D_001F69F0[];
extern char D_001F69F8[];
extern char D_001F6A18[];
extern char D_001F6A20[];
extern char D_001F6A40[];

extern char *strncpy(char *, const char *, unsigned);
extern int strncmp(const char *, const char *, unsigned);
extern int snprintf(char *, unsigned, const char *, ...);
extern void func_0289C8(char *);

int func_0289D8(char *dst, int size, char *src, int flag)
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
    if (strncmp(D_001F69D8, buf, 4) == 0)
        p = buf + 4;
    else
        p = strncmp(D_001F69E0, buf, 5) ? buf : buf + 5;
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
    if (strncmp(D_001F69E8, buf, 6) == 0) {
        strncpy(dst, buf, n);
        *end = 0;
    } else if (strncmp(D_001F69F0, buf, 6) == 0) {
        res = 1;
        if (strncmp(D_001F69F8, buf, 0x1F) == 0) {
            res = 0;
            snprintf(dst, n, D_001F6A18, D_001F6A20, tail = buf + 0x1F);
            if (!flag)
                func_0289C8(tail);
            *end = 0;
        } else {
            strncpy(dst, buf, n);
            *end = 0;
        }
    } else if (strncmp(D_001F6A40, buf, 0x19) == 0) {
        tail = buf + 0x19;
        if (!flag)
            func_0289C8(tail);
        snprintf(dst, n, D_001F6A18, D_001F6A20, tail);
        *end = 0;
    } else {
        if (!flag)
            func_0289C8(buf);
        snprintf(dst, n, D_001F6A18, D_001F6A20, buf);
        *end = 0;
    }
    return res;
}
