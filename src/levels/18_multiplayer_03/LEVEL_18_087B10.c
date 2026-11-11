extern char D_0024EA8C[];
extern void *func_087758(char *, void *, void *, int);

void *func_087B10(char *record, int index, int extra)
{
    char *entry = D_0024EA8C + index * 40;
    return func_087758(record, entry + 16, entry, extra);
}
