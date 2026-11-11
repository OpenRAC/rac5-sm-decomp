/* LEVEL_07:0x029EB0 -- placement copy of FRONTEND_002988.c: normalises a path string (case, slashes, prefix) into a bounded buffer. */
extern char D_00221AD8[];
extern char D_00221AE0[];
extern char D_00221AE8[];
extern char D_00221AF0[];
extern char D_00221AF8[];
extern char D_00221B18[];
extern char D_00221B20[];
extern char D_00221B40[];

extern char *strncpy(char *, const char *, unsigned);
extern int strncmp(const char *, const char *, unsigned);
extern int snprintf(char *, unsigned, const char *, ...);
extern void func_029EA0(char *);

int func_029EB0(char *dst, int size, char *src, int flag)
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
    if (strncmp(D_00221AD8, buf, 4) == 0)
        p = buf + 4;
    else
        p = strncmp(D_00221AE0, buf, 5) ? buf : buf + 5;
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
    if (strncmp(D_00221AE8, buf, 6) == 0) {
        strncpy(dst, buf, n);
        *end = 0;
    } else if (strncmp(D_00221AF0, buf, 6) == 0) {
        res = 1;
        if (strncmp(D_00221AF8, buf, 0x1F) == 0) {
            res = 0;
            snprintf(dst, n, D_00221B18, D_00221B20, tail = buf + 0x1F);
            if (!flag)
                func_029EA0(tail);
            *end = 0;
        } else {
            strncpy(dst, buf, n);
            *end = 0;
        }
    } else if (strncmp(D_00221B40, buf, 0x19) == 0) {
        tail = buf + 0x19;
        if (!flag)
            func_029EA0(tail);
        snprintf(dst, n, D_00221B18, D_00221B20, tail);
        *end = 0;
    } else {
        if (!flag)
            func_029EA0(buf);
        snprintf(dst, n, D_00221B18, D_00221B20, buf);
        *end = 0;
    }
    return res;
}
