extern char D_002A16CC[];
extern void *func_097610(char *, void *, void *, int);

void *func_097AF0(char *record, int index, int extra)
{
    char *entry = D_002A16CC + index * 40;
    return func_097610(record, entry + 16, entry, extra);
}
