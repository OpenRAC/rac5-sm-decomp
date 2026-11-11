extern char D_002AF7CC[];
extern void *func_09D970(char *, void *, void *, int);

void *func_09DD28(char *record, int index, int extra)
{
    char *entry = D_002AF7CC + index * 40;
    return func_09D970(record, entry + 16, entry, extra);
}
