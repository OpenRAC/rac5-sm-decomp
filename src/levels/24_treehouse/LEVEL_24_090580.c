extern char D_0026418C[];
extern void *func_0900A0(char *, void *, void *, int);

void *func_090580(char *record, int index, int extra)
{
    char *entry = D_0026418C + index * 40;
    return func_0900A0(record, entry + 16, entry, extra);
}
