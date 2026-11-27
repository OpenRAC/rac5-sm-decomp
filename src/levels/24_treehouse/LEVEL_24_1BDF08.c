/* LEVEL_24:0x1BDF08 -- placement copy of LEVEL_01_1ED230.c: parses one record header: finds the record's name through its back offset, accepts the two known names or a 'z' prefix, reads the optional word that follows the name, then the two helper-decoded fields and the byte flag, and returns the pointer past everything read. */
extern int strcmp(const char *a, const char *b);
extern unsigned int strlen(const char *s);

typedef struct {
    char *name;
    int w4;
    int w8;
    int wC;
    int w10;
} Out;

typedef struct {
    char pad00[4];
    int back;
} Head;

typedef struct {
    int v;
} __attribute__((packed)) Unaligned;

extern char D_001F71B0[];
extern char D_001F71B8[];
extern char *func_1BD810(char *src, int *out);
extern char *func_1BD858(char *src, int *out);

char *func_1BDF08(Head *h, Out *out)
{
    char *p;
    char *q;
    int n[4];

    out->name = (char *)h - h->back + 0xD;
    if (strcmp(out->name, D_001F71B0) != 0 && strcmp(out->name, D_001F71B8) != 0 && *out->name != 'z')
        return 0;
    q = out->name + strlen(out->name);
    p = q + 1;
    if (strcmp(out->name, D_001F71B8) == 0) {
        out->w4 = ((Unaligned *)p)->v;
        p = q + 5;
    } else {
        out->w4 = 0;
    }
    p = func_1BD810(p, &out->w8);
    p = func_1BD858(p, &out->wC);
    out->w10 = *(unsigned char *)p;
    p++;
    if (*out->name == 'z') {
        p = func_1BD810(p, n) + n[0];
    }
    return p;
}
