extern char D_0024E70C[];
extern void *func_087E10(char *, void *, void *, int);

void *PAR_Emit__FPiii(char *record, int index, int extra)
{
    char *entry = D_0024E70C + index * 40;
    return func_087E10(record, entry + 16, entry, extra);
}
