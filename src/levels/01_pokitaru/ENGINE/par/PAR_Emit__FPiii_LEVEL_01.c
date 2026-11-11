extern char D_002982CC[];
extern void *func_0972A0(char *, void *, void *, int);

void *PAR_Emit__FPiii(char *record, int index, int extra)
{
    char *entry = D_002982CC + index * 40;
    return func_0972A0(record, entry + 16, entry, extra);
}
