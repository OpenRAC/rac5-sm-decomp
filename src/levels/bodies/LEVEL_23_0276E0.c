/* LEVEL_23:0x0276E0 -- placement copy of FRONTEND_002988.c: normalises a path string (case, slashes, prefix) into a bounded buffer. */
extern char D_001DFF58[];
extern char D_001DFF60[];
extern char D_001DFF68[];
extern char D_001DFF70[];
extern char D_001DFF78[];
extern char D_001DFF98[];
extern char D_001DFFA0[];
extern char D_001DFFC0[];

extern char *strncpy(char *, const char *, unsigned);
extern int strncmp(const char *, const char *, unsigned);
extern int snprintf(char *, unsigned, const char *, ...);
extern void func_0276D0(char *);

int func_0276E0(char *dst, int size, char *src, int flag)
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
    if (strncmp(D_001DFF58, buf, 4) == 0)
        p = buf + 4;
    else
        p = strncmp(D_001DFF60, buf, 5) ? buf : buf + 5;
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
    if (strncmp(D_001DFF68, buf, 6) == 0) {
        strncpy(dst, buf, n);
        *end = 0;
    } else if (strncmp(D_001DFF70, buf, 6) == 0) {
        res = 1;
        if (strncmp(D_001DFF78, buf, 0x1F) == 0) {
            res = 0;
            snprintf(dst, n, D_001DFF98, D_001DFFA0, tail = buf + 0x1F);
            if (!flag)
                func_0276D0(tail);
            *end = 0;
        } else {
            strncpy(dst, buf, n);
            *end = 0;
        }
    } else if (strncmp(D_001DFFC0, buf, 0x19) == 0) {
        tail = buf + 0x19;
        if (!flag)
            func_0276D0(tail);
        snprintf(dst, n, D_001DFF98, D_001DFFA0, tail);
        *end = 0;
    } else {
        if (!flag)
            func_0276D0(buf);
        snprintf(dst, n, D_001DFF98, D_001DFFA0, buf);
        *end = 0;
    }
    return res;
}
