/* LEVEL_18:0x026B78 -- placement copy of FRONTEND_002988.c: normalises a path string (case, slashes, prefix) into a bounded buffer. */
extern char D_001C3320[];
extern char D_001C3328[];
extern char D_001C3330[];
extern char D_001C3338[];
extern char D_001C3340[];
extern char D_001C3360[];
extern char D_001C3368[];
extern char D_001C3388[];

extern char *strncpy(char *, const char *, unsigned);
extern int strncmp(const char *, const char *, unsigned);
extern int snprintf(char *, unsigned, const char *, ...);
extern void func_026B68(char *);

int func_026B78(char *dst, int size, char *src, int flag)
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
    if (strncmp(D_001C3320, buf, 4) == 0)
        p = buf + 4;
    else
        p = strncmp(D_001C3328, buf, 5) ? buf : buf + 5;
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
    if (strncmp(D_001C3330, buf, 6) == 0) {
        strncpy(dst, buf, n);
        *end = 0;
    } else if (strncmp(D_001C3338, buf, 6) == 0) {
        res = 1;
        if (strncmp(D_001C3340, buf, 0x1F) == 0) {
            res = 0;
            snprintf(dst, n, D_001C3360, D_001C3368, tail = buf + 0x1F);
            if (!flag)
                func_026B68(tail);
            *end = 0;
        } else {
            strncpy(dst, buf, n);
            *end = 0;
        }
    } else if (strncmp(D_001C3388, buf, 0x19) == 0) {
        tail = buf + 0x19;
        if (!flag)
            func_026B68(tail);
        snprintf(dst, n, D_001C3360, D_001C3368, tail);
        *end = 0;
    } else {
        if (!flag)
            func_026B68(buf);
        snprintf(dst, n, D_001C3360, D_001C3368, buf);
        *end = 0;
    }
    return res;
}
