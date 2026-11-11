/* LEVEL_17:0x026F48 -- placement copy of FRONTEND_002988.c: normalises a path string (case, slashes, prefix) into a bounded buffer. */
extern char D_001B5220[];
extern char D_001B5228[];
extern char D_001B5230[];
extern char D_001B5238[];
extern char D_001B5240[];
extern char D_001B5260[];
extern char D_001B5268[];
extern char D_001B5288[];

extern char *strncpy(char *, const char *, unsigned);
extern int strncmp(const char *, const char *, unsigned);
extern int snprintf(char *, unsigned, const char *, ...);
extern void func_026F38(char *);

int func_026F48(char *dst, int size, char *src, int flag)
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
    if (strncmp(D_001B5220, buf, 4) == 0)
        p = buf + 4;
    else
        p = strncmp(D_001B5228, buf, 5) ? buf : buf + 5;
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
    if (strncmp(D_001B5230, buf, 6) == 0) {
        strncpy(dst, buf, n);
        *end = 0;
    } else if (strncmp(D_001B5238, buf, 6) == 0) {
        res = 1;
        if (strncmp(D_001B5240, buf, 0x1F) == 0) {
            res = 0;
            snprintf(dst, n, D_001B5260, D_001B5268, tail = buf + 0x1F);
            if (!flag)
                func_026F38(tail);
            *end = 0;
        } else {
            strncpy(dst, buf, n);
            *end = 0;
        }
    } else if (strncmp(D_001B5288, buf, 0x19) == 0) {
        tail = buf + 0x19;
        if (!flag)
            func_026F38(tail);
        snprintf(dst, n, D_001B5260, D_001B5268, tail);
        *end = 0;
    } else {
        if (!flag)
            func_026F38(buf);
        snprintf(dst, n, D_001B5260, D_001B5268, buf);
        *end = 0;
    }
    return res;
}
