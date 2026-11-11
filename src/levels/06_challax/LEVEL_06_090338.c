extern char D_0028504C[];
extern void *func_08FE58(char *, void *, void *, int);

void *func_090338(char *record, int index, int extra)
{
    char *entry = D_0028504C + index * 40;
    return func_08FE58(record, entry + 16, entry, extra);
}
